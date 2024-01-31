@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (id)init;
- (void)dealloc;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void)_stopUsingSecurityScopedURLs;
- (void).cxx_destruct;

@end
