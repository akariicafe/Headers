@interface FTMutableTTSRequestFeatureFlags : FTTTSRequestFeatureFlags

@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;
@property (nonatomic) BOOL disable_prompts;
@property (nonatomic) BOOL cache_only;
@property (nonatomic) long long phoneset_type;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
