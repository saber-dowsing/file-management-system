// file_system.c

#include "file.h"
#include "directory.h"

int main() {
    // Create files
    struct File file1 = createFile(1, "file1.txt", 1, 0);
    struct File file2 = createFile(2, "file2.txt", 1, 1);

    // Create directories
    struct Directory dir1 = createDirectory(101, "Documents");
    struct Directory dir2 = createDirectory(102, "Images");

    // Display file and directory information
    printf("File Information:\n");
    displayFileInfo(file1);
    printf("\n");
    displayFileInfo(file2);

    printf("\nDirectory Information:\n");
    displayDirectoryInfo(dir1);
    printf("\n");
    displayDirectoryInfo(dir2);

    return 0;
}
