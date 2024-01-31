@class NSArray;

@interface CMISharpnessScoreResult : NSObject

@property (readonly, nonatomic) float fullImageScore;
@property (readonly, nonatomic) NSArray *facesScores;

- (void).cxx_destruct;
- (id)initWithFullImageScore:(float)a0 facesScore:(id)a1;

@end
