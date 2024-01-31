@class NSSet;

@interface IntelligencePlatformCore.VirtualInteractionsSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ virtualInteractionsStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
