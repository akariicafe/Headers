@interface PGGraphRelationsFeatureValidator : PGFeatureValidator

- (long long)featureValidatorType;
- (long long)isValidEntity:(id)a0 error:(id *)a1;
- (long long)isValidEntity:(id)a0 graph:(id)a1 error:(id *)a2;

@end
