@interface LCFChangepointDetection : NSObject

+ (id)_generateFeatureDictionaryForFeatureStore:(id)a0 featureNames:(id)a1 labelName:(id)a2 timestampName:(id)a3;
+ (id)analyzeChangePointInEvents:(id)a0 withTestParameters:(id)a1 lastRunDate:(id)a2;
+ (id)convertFeatureStoreToEvents:(id)a0 featureNames:(id)a1 labelName:(id)a2 valueName:(id)a3 timestampName:(id)a4;

@end
