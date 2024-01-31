@interface IXFileManager : NSObject

+ (id)defaultManager;

- (BOOL)copyItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)moveItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)_traverseDirectory:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
- (id)_realPathForURL:(id)a0 allowNonExistentPathComponents:(BOOL)a1;
- (BOOL)itemExistsAtURL:(id)a0;
- (id)createTemporaryDirectoryInDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)_moveItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 error:(id *)a3;
- (BOOL)itemDoesNotExistAtURL:(id)a0;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 error:(id *)a3;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (unsigned long long)diskUsageForURL:(id)a0;
- (id)realPathForURL:(id)a0 ifChildOfURL:(id)a1;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)_realPathWhatExistsInPath:(id)a0;
- (BOOL)_copyItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 error:(id *)a3;
- (BOOL)_validateSymlink:(id)a0 withStartingDepth:(unsigned int)a1 andEndingDepth:(unsigned int *)a2;
- (BOOL)createSymbolicLinkAtURL:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (unsigned long long)_diskUsageForDirectoryURL:(id)a0;
- (BOOL)_removeACLAtPath:(const char *)a0 isDir:(BOOL)a1 error:(id *)a2;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 class:(int)a3 error:(id *)a4;
- (id)createTemporaryExtractionDirectoryWithError:(id *)a0;
- (BOOL)dataProtectionClassOfItemAtURL:(id)a0 class:(int *)a1 error:(id *)a2;
- (id)debugDescriptionOfItemAtURL:(id)a0;
- (id)destinationOfSymbolicLinkAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemExistsAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemExistsAtURL:(id)a0 isDirectory:(BOOL *)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 keepParent:(BOOL)a1 error:(id *)a2;
- (BOOL)setDataProtectionClassOfItemAtURL:(id)a0 toClass:(int)a1 ifPredicate:(id /* block */)a2 error:(id *)a3;
- (BOOL)setPermissionsOfItemAtURL:(id)a0 toMode:(unsigned short)a1 error:(id *)a2;
- (id)urlsForItemsInDirectoryAtURL:(id)a0 ignoringSymlinks:(BOOL)a1 error:(id *)a2;

@end
