@interface _PSHistogramFeatures : NSObject

+ (int)bucketCounttimeIntervalForFeatureName:(int)a0;
+ (id)computeFactorNameForFeature:(id)a0;
+ (id)conditionedProbabilityAcrossAllBucketsWithCandidates:(id)a0 featureName:(int)a1 predictionContext:(id)a2 histogramFeatureData:(id)a3 histogramSmoothingParameterK:(id)a4 histogramSmoothingParameterV:(id)a5;
+ (id)conditionedProbabilityAcrossAllCandidatesWithCandidates:(id)a0 featureName:(int)a1 predictionContext:(id)a2 histogramFeatureData:(id)a3 histogramSmoothingParameterK:(id)a4 histogramSmoothingParameterV:(id)a5;
+ (id)fetchBucketNamesFromPredictionContextForFeatureName:(int)a0 predictionContext:(id)a1;
+ (id)fetchIntervalStringForFeatureName:(int)a0;
+ (id)hasEverInBucketWithCandidates:(id)a0 featureName:(int)a1 predictionContext:(id)a2 histogramFeatureData:(id)a3;
+ (int)virtualFeatureToDurableFeatureSourceMapping:(int)a0;

@end
