// directory.h

#ifndef DIRECTORY_H
#define DIRECTORY_H

struct Directory {
    int directoryId;
    char* directoryName;
};

struct Directory createDirectory(int directoryId, const char* directoryName);
void displayDirectoryInfo(struct Directory directory);

#endif
