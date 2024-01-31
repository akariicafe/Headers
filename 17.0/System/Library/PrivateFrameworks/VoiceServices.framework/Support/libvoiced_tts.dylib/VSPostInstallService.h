@interface VSPostInstallService : NSObject

- (void)resetMobileAssetDefaults;
- (void)registerPostInstallActivity;
- (void)clearSynthesisCache;

@end
