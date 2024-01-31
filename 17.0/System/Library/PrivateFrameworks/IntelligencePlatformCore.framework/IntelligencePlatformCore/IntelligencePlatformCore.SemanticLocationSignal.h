@class NSSet;

@interface IntelligencePlatformCore.SemanticLocationSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ semanticLocationStream;
    void /* unknown type, empty encoding */ includeLastOngoingEventInSessions;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
