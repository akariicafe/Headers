@class NSSet;

@interface VisualIntelligence.DomainPredictionModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ featureMap;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
