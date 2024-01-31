@class NSSet, VCPHandObservation;

@interface VCPCoreMLFeatureProviderGesture : NSObject <MLFeatureProvider> {
    VCPHandObservation *_observation;
}

@property int rotationInDegrees;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWith:(id)a0 rotationInDegrees:(int)a1;

@end
