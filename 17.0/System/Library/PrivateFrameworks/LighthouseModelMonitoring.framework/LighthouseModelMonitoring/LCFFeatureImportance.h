@interface LCFFeatureImportance : NSObject

+ (id)_generateFeatureDictionaryForFeatureStore:(id)a0 featureNames:(id)a1 labelName:(id)a2;
+ (id)analyzeFeatureImportanceWithFeatureStore:(id)a0 featureNames:(id)a1 labelName:(id)a2;
+ (id)analyzeFeatureQuality:(id)a0 featureNames:(id)a1 labelName:(id)a2;
+ (id)computeCorrelationBetweenVector:(id)a0 andOtherVector:(id)a1;

@end
