@interface ADLineRansacParameters : NSObject

@property (nonatomic) BOOL constantSlope;
@property (nonatomic) int maxIterations;
@property (nonatomic) float threshold;
@property (nonatomic) float minInlinersRatio;
@property (nonatomic) unsigned int seed;
@property (nonatomic) BOOL errorByY;

- (id)init;

@end
