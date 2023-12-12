// file.c

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

struct File createFile(int fileId, const char* fileName, int readPermission, int writePermission) {
    struct File newFile;
    newFile.fileId = fileId;
    newFile.fileName = strdup(fileName);
    newFile.filePermission.readPermission = readPermission;
    newFile.filePermission.writePermission = writePermission;
    return newFile;
}

void displayFileInfo(struct File file) {
    printf("File ID: %d\n", file.fileId);
    printf("File Name: %s\n", file.fileName);
    printf("Read Permission: %d\n", file.filePermission.readPermission);
    printf("Write Permission: %d\n", file.filePermission.writePermission);
}
