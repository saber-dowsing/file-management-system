// directory.c

#include <stdio.h>
#include <stdlib.h>
#include "directory.h"

struct Directory createDirectory(int directoryId, const char* directoryName) {
    struct Directory newDirectory;
    newDirectory.directoryId = directoryId;
    newDirectory.directoryName = strdup(directoryName);
    return newDirectory;
}

void displayDirectoryInfo(struct Directory directory) {
    printf("Directory ID: %d\n", directory.directoryId);
    printf("Directory Name: %s\n", directory.directoryName);
}
