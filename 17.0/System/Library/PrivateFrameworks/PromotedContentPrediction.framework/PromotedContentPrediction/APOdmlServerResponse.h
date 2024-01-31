@class NSDictionary;

@interface APOdmlServerResponse : NSObject

@property (retain, nonatomic) NSDictionary *featureValues;
@property (nonatomic) BOOL odmlEnabled;

- (void).cxx_destruct;
- (void)addAgeRange:(id)a0 birthYear:(id)a1;
- (void)addCachedFeatures:(id)a0 deviceModel:(id)a1;
- (void)addDeviceClass:(id)a0 newFeatureValues:(id)a1;
- (void)addGender:(id)a0 gender:(id)a1;
- (void)addStorefront:(id)a0 storefront:(id)a1;
- (void)addUserRating:(id)a0;
- (int)ageFromBirthYear:(id)a0;
- (id)falseFeatureValue;
- (id)initWithSLPResponse:(id)a0;
- (id)initWithSRPResponse:(id)a0;
- (id)oneHotEncode:(id)a0 trueKey:(id)a1;
- (id)trueFeatureValue;

@end
