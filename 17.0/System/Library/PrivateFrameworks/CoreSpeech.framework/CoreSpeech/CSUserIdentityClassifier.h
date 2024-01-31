@interface CSUserIdentityClassifier : NSObject

+ (unsigned long long)classifyUserIdentityFor:(id)a0 withScores:(id)a1 lowScoreThreshold:(long long)a2 highScoreThreshold:(long long)a3 confidentThreshold:(long long)a4 scoreDiffThreshold:(long long)a5;
+ (unsigned long long)classifyUserIdentityFor:(id)a0 withScores:(id)a1 withAsset:(id)a2 withPhId:(unsigned long long)a3;
+ (id)pickTopScoringProfileIdFromScores:(id)a0;
+ (id)stringFromClassificationCategory:(unsigned long long)a0;

@end
