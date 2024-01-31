@class NSSet;

@interface IntelligencePlatformCore.DevicePowerSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ biomeLibrary;
    void /* unknown type, empty encoding */ lowPowerModeStream;
    void /* unknown type, empty encoding */ batteryLevelStream;
    void /* unknown type, empty encoding */ pluggedInStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
