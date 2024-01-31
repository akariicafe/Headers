@class PXStoryColorGradingConfiguration;

@interface PXStoryColorGradingConfigurationFactory : NSObject

@property (class, readonly, nonatomic) PXStoryColorGradingConfiguration *sharedConfiguration;

+ (id)newConfiguration;

@end
