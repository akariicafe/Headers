@interface BWStillImageConditionalRouterDepthConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int yuvOutputIndex;
@property (readonly, nonatomic) unsigned int rawOutputIndex;

+ (id)depthConfiguration;

- (id)init;

@end
