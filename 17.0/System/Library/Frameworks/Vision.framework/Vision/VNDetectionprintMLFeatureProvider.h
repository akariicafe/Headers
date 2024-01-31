@class NSSet, NSDictionary, VNDetectionprint;
@protocol MLFeatureProvider;

@interface VNDetectionprintMLFeatureProvider : NSObject <MLFeatureProvider> {
    VNDetectionprint *_detectionprint;
    NSDictionary *_detectionprintFeatureDescriptions;
    id<MLFeatureProvider> _originalFeatureProvider;
}

@property (readonly, nonatomic) NSSet *featureNames;

+ (id)VNDetectionprintTensorKeyForFeatureName:(id)a0;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithDetectionprint:(id)a0 featureDescriptions:(id)a1 originalFeatureProvider:(id)a2;

@end
