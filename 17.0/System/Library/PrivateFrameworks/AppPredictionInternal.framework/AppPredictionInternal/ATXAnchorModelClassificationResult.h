@interface ATXAnchorModelClassificationResult : NSObject

@property (readonly, nonatomic) BOOL shouldPredictCandidate;
@property (readonly, nonatomic) double score;

- (id)initWithShouldPredictCandidate:(BOOL)a0 score:(double)a1;

@end
