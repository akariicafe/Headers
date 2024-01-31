@class NSSet;

@interface SiriInference.PhoneAppPredictorInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ X;
    void /* unknown type, empty encoding */ domain_type;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
