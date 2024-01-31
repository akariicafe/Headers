@class NSArray, NSEnumerator;

@interface EXOSExtensionEnumerator : NSEnumerator

@property (readonly) NSArray *extensionPaths;
@property (readonly) NSEnumerator *extensionPathsEnumerator;

+ (void)enumerateExtensionsInDirectoryAtURL:(id)a0 block:(id /* block */)a1;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithCacheURLs:(id)a0;
- (id)initWithCacheURLs:(id)a0 paths:(id)a1;

@end
