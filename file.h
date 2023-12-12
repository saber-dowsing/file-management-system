// file.h

#ifndef FILE_H
#define FILE_H

#include "permission.h"

struct File {
    int fileId;
    char* fileName;
    struct Permission filePermission;
};

struct File createFile(int fileId, const char* fileName, int readPermission, int writePermission);
void displayFileInfo(struct File file);

#endif
