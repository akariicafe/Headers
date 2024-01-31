@class NSSet;

@interface IntelligencePlatformCore.MultiFeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ featureMapping;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
