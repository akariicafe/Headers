@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
    NSString *path;
    NSArray *contents;
    unsigned long long idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    unsigned long long depth;
    BOOL cross;
    char _padding[3];
}

+ (id)newWithPath:(id)a0 prepend:(id)a1 attributes:(id)a2 cross:(BOOL)a3 depth:(unsigned long long)a4;

- (void)dealloc;
- (id)nextObject;
- (id)currentSubdirectoryAttributes;
- (unsigned long long)level;
- (void)skipDescendants;
- (id)fileAttributes;
- (id)directoryAttributes;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (id)_under;
- (void)skipDescendents;

@end
