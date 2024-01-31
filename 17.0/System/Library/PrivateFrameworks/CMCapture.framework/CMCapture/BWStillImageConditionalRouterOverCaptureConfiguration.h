@interface BWStillImageConditionalRouterOverCaptureConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int narrowFieldOfViewOutputIndex;
@property (readonly, nonatomic) unsigned int wideFieldOfViewOutputIndex;

+ (id)overCaptureConfiguration;

- (id)init;

@end
