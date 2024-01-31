@class NSPredicate, PGFeatureExtractor, NSString;

@interface PGFeatureValidator : NSObject

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) PGFeatureExtractor *featureExtractor;
@property (readonly, nonatomic) NSString *featureName;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (long long)_isValidEntity:(id)a0 featureExtractor:(id)a1 error:(id *)a2;
- (long long)featureValidatorType;
- (id)initWithPredicate:(id)a0 featureExtractor:(id)a1 featureName:(id)a2;
- (long long)isValidEntity:(id)a0 error:(id *)a1;

@end
