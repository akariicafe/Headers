@interface APOdmlFeatureValidator : NSObject

- (id)imputeFeature:(id)a0;
- (id)imputeMissingFeatures:(id)a0;
- (id)missingFeatures:(id)a0 inputDescriptions:(id)a1;
- (void)reportMissingFeatureError:(id)a0;
- (id)validateFeatureProvider:(id)a0 inputDescriptions:(id)a1;
- (id)validateFeatures:(id)a0 predictionModel:(id)a1;

@end
