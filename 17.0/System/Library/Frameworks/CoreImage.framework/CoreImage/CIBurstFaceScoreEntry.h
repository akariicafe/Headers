@interface CIBurstFaceScoreEntry : NSObject {
    float sumScores;
    float sumSqScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (id)initWithScore:(float)a0;
- (void)addScore:(float)a0;
- (float)computeAverage;
- (float)computeStandardDeviation;

@end
