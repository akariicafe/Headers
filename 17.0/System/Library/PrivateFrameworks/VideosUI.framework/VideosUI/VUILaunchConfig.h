@interface VUILaunchConfig : NSObject

@property (nonatomic) BOOL useConfigCacheIgnoreExpiry;
@property (nonatomic) double extendedCacheExpireDuration;

- (id)init;

@end
