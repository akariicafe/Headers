@interface ATXDirichletDistribution : NSObject {
    double kGlobalScoreMultiplier;
    double kBlendedScoreNormalizationConstant;
}

+ (id)sharedInstance;
+ (double)getGammaDistributionShapeParameterForComputingGlobalAppScoresWithAlpha:(double)a0 andNormalizationConstant:(double)a1;

- (id)init;
- (id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)a0 andNormalizationConstant:(double)a1;
- (id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)a0 andGlobalScores:(id)a1 withSamplingEnabled:(BOOL)a2;

@end
