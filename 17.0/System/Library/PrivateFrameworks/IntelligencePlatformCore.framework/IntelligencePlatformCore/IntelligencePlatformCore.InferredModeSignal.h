@class NSSet;

@interface IntelligencePlatformCore.InferredModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ inferredModeEvent;
    void /* unknown type, empty encoding */ inferredModeConfidenceThreshold;
    void /* unknown type, empty encoding */ inferredModeStream;
    void /* unknown type, empty encoding */ filteringEnabledInDataProviders;
    void /* unknown type, empty encoding */ includeLastOngoingEventInSessions;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
