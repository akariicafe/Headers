@interface FudProgressWeights : NSObject

@property float prepareWeight;
@property float applyWeight;
@property float finishWeight;

- (id)description;
- (double)calculateOverallProgressWithStepProgress:(double)a0 step:(int)a1;
- (id)initWithPrepareWeight:(float)a0 applyWeight:(float)a1 finishWeight:(float)a2;

@end
