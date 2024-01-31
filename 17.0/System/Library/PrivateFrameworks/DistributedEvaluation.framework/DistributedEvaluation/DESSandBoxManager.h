@class NSArray, NSMutableArray;

@interface DESSandBoxManager : NSObject {
    NSArray *_extensions;
    NSMutableArray *_consumedSandboxExtensions;
}

+ (id)sandboxExtensionsToXPCConnection:(id)a0 fileURLs:(id)a1 requireWrite:(BOOL)a2 outError:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExtensions:(id)a0;
- (BOOL)consumeExtensionsWithError:(id *)a0;
- (void)releaseExtensions;

@end
