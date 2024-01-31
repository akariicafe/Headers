@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    BOOL shouldContinue;
    BOOL isPostOrderDirectory;
}

@property (copy) id /* block */ errorHandler;

- (void)dealloc;
- (id)nextObject;
- (unsigned long long)level;
- (void)skipDescendants;
- (id)initWithURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (id)fileAttributes;
- (id)directoryAttributes;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (void)skipDescendents;

@end
