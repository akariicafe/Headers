@class NSSet;

@interface IntelligencePlatformCore.AppLaunchSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ redactedBundleId;
    void /* unknown type, empty encoding */ appLaunchStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
