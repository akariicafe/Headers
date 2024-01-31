@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (void)close;
- (unsigned long long)hash;
- (BOOL)isDirectory;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
