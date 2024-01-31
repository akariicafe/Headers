@interface SKUIMutableApplicationControllerOptions : SKUIApplicationControllerOptions

@property (nonatomic) BOOL supportsFullApplicationReload;
@property (nonatomic) long long tabBarControllerStyle;
@property (nonatomic) BOOL pageRenderMetricsEnabled;
@property (nonatomic) BOOL requiresLocalBootstrapScript;
@property (nonatomic, getter=isBootstrapScriptFallbackEnabled) BOOL bootstrapScriptFallbackEnabled;
@property (nonatomic) double bootstrapScriptFallbackMaximumAge;
@property (nonatomic) double bootstrapScriptTimeoutInterval;
@property (nonatomic) BOOL useTransientStorageForTests;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUseTransientStorageForTests:(BOOL)a0;
- (void)setBootstrapScriptFallbackEnabled:(BOOL)a0;
- (void)setBootstrapScriptFallbackMaximumAge:(double)a0;
- (void)setBootstrapScriptTimeoutInterval:(double)a0;
- (void)setPageRenderMetricsEnabled:(BOOL)a0;
- (void)setRequiresLocalBootstrapScript:(BOOL)a0;
- (void)setSupportsFullApplicationReload:(BOOL)a0;
- (void)setTabBarControllerStyle:(long long)a0;

@end
