@interface BWStillImageConditionalRouterOptimizedEnhancedPortraitConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int mainImageOutputIndex;
@property (readonly, nonatomic) unsigned int deepFusionImageOutputIndex;

+ (id)optimizedEnhancedPortraitConfiguration;

- (id)init;

@end
