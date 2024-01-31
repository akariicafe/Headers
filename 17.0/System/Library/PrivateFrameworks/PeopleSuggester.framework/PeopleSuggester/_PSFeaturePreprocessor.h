@interface _PSFeaturePreprocessor : NSObject

+ (id)extractFeatureValuesFromFeatureObjects:(id)a0;
+ (id)featureNameToOneHotEncodedFeatureNameGivenFeatureName:(id)a0 featureValue:(id)a1;
+ (id)getEnumBasedSuffix:(id)a0 featureValue:(id)a1;
+ (id)getNumberFromVirtualFeatureValue:(id)a0;
+ (id)getStringBasedSuffix:(id)a0 featureValue:(id)a1;
+ (id)oneHotEncodedDictionaryWithCandidateToFeatureVectorDict:(id)a0;
+ (id)rawDataToCandidateFeatureDict:(id)a0;

@end
