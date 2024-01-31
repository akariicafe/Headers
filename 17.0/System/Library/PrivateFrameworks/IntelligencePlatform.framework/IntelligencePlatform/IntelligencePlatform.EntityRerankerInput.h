@class NSSet;

@interface IntelligencePlatform.EntityRerankerInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ inputScores;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
