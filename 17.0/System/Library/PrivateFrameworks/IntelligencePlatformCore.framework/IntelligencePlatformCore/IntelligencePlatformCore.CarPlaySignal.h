@class NSSet;

@interface IntelligencePlatformCore.CarPlaySignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ includeLastOngoingEventInSessions;
    void /* unknown type, empty encoding */ carPlayStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
