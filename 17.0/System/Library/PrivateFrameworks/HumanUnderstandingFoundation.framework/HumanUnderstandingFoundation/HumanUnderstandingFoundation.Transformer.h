@class NSSet;

@interface HumanUnderstandingFoundation.Transformer : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ featureProvider;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
