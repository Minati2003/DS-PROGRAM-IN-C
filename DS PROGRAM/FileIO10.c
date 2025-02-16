#include <stdio.h>
#include <miniz.h>

void extract_and_print_zip_contents(const char *zip_filename) {
    // Open the ZIP file
    mz_zip_archive zip_archive;
    if (!mz_zip_reader_init_file(&zip_archive, zip_filename, 0)) {
        printf("Error: Failed to open ZIP file '%s'.\n", zip_filename);
        return;
    }

    // Get the number of files in the ZIP archive
    int num_files = mz_zip_reader_get_num_files(&zip_archive);
    printf("Found %d file(s) in '%s':\n", num_files, zip_filename);

    // Loop through and extract each file
    for (int i = 0; i < num_files; i++) {
        // Get file info
        mz_zip_archive_file_stat file_stat;
        if (!mz_zip_reader_file_stat(&zip_archive, i, &file_stat)) {
            printf("Error: Failed to get file stats for file %d.\n", i);
            continue;
        }

        // Print file name
        printf("File: %s\n", file_stat.m_filename);

        // Allocate memory for file content
        size_t file_size = file_stat.m_uncompressed_size;
        unsigned char *file_data = (unsigned char *)malloc(file_size);
        if (file_data == NULL) {
            printf("Error: Memory allocation failed.\n");
            continue;
        }

        // Extract file
        if (!mz_zip_reader_extract_to_mem(&zip_archive, i, file_data, file_size, 0)) {
            printf("Error: Failed to extract file '%s'.\n", file_stat.m_filename);
            free(file_data);
            continue;
        }

        // Print the file content (assumes it's text)
        printf("Content:\n%s\n", file_data);
        free(file_data);
    }

    // Close the ZIP archive
    mz_zip_reader_end(&zip_archive);
}

int main() {
    const char *zip_filename = "example.zip";  // Replace with your ZIP file path
    extract_and_print_zip_contents(zip_filename);
    return 0;
}
