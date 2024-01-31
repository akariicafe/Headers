@interface ADDisparityToDepthFitResult : NSObject

@property (readonly, nonatomic) float disparityToDepthMultiplier;
@property (readonly, nonatomic) float disparityToDepthOffset;

- (id)initWithDisparityToDepthMultiplier:(float)a0 disparityToDepthOffset:(float)a1;

@end
