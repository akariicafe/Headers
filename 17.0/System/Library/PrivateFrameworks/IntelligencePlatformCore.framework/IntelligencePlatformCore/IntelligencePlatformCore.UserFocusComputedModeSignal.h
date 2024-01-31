@class NSSet;

@interface IntelligencePlatformCore.UserFocusComputedModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ includeLastOngoingEventInSessions;
    void /* unknown type, empty encoding */ userFocusComputedModeStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
