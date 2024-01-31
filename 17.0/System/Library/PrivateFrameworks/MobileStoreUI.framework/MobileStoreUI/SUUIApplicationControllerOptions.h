@interface SUUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying> {
    BOOL _supportsFullApplicationReload;
    long long _tabBarControllerStyle;
    BOOL _pageRenderMetricsEnabled;
    BOOL _requiresLocalBootstrapScript;
    BOOL _bootstrapScriptFallbackEnabled;
    double _bootstrapScriptFallbackMaximumAge;
    double _bootstrapScriptTimeoutInterval;
    BOOL _useTransientStorageForTests;
}

@property (readonly, nonatomic) BOOL supportsFullApplicationReload;
@property (readonly, nonatomic) long long tabBarControllerStyle;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;
@property (readonly, nonatomic) BOOL requiresLocalBootstrapScript;
@property (readonly, nonatomic, getter=isBootstrapScriptFallbackEnabled) BOOL bootstrapScriptFallbackEnabled;
@property (readonly, nonatomic) double bootstrapScriptFallbackMaximumAge;
@property (readonly, nonatomic) double bootstrapScriptTimeoutInterval;
@property (readonly, nonatomic) BOOL useTransientStorageForTests;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
