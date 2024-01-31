@interface _LSBundleProvider : NSObject {
    void *_provider;
}

@property (readonly) void *provider;

- (id)infoDictionary;
- (void)dealloc;
- (id)bundlePath;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)initWithURL:(id)a0 useCacheIfPossible:(BOOL)a1;
- (BOOL)usingCachedItem;
- (id)bundle:(BOOL)a0 reason:(id)a1;
- (struct __CFBundle { } *)cfBundleRef;
- (struct __CFBundle { } *)cfBundleRef:(BOOL)a0 reason:(id)a1;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;

@end
