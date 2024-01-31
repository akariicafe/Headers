@class NSURL, NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {
    NSArray *_overrides;
    id /* block */ _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

@property (class, readonly, copy) NSURL *overrideDirectoryURL;

+ (id)allOverrides;
+ (void)removeOverride:(id)a0;
+ (void)addOverride:(id)a0;
+ (id)newIteratorWithNotFoundHandler:(id /* block */)a0;

- (void)forwardInvocation:(id)a0;
- (void)finish;
- (id)initWithOverrides:(id)a0 noSuitableModuleFoundHandler:(id /* block */)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)callNextOverrides;

@end
