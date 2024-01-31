@interface APOdmlSLPResponseParser : NSObject

+ (id)convertArrayToFeatureValue:(id)a0;
+ (id)convertStringToFeatureValue:(id)a0;
+ (id)convertToFeatureValue:(id)a0;
+ (BOOL)isValidResponse:(id)a0;
+ (id)parseFeature:(id)a0 withTopLevelKey:(id)a1 forKey:(id)a2;
+ (id)parseFeatureDictionaryForFeatureValues:(id)a0;
+ (id)parseResponseForFeatureValues:(id)a0;

@end
