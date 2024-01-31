@class NSSet;

@interface IntelligencePlatformCore.MotionStateSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ motionStateEvents;
    void /* unknown type, empty encoding */ filteringEnabledInDataProviders;
    void /* unknown type, empty encoding */ smoothingInterval;
    void /* unknown type, empty encoding */ motionStateStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
