@class NSSet;

@interface IntelligencePlatformCore.MicroLocationSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ fiveMinuteInSeconds;
    void /* unknown type, empty encoding */ microLocationStream;
    void /* unknown type, empty encoding */ microLocationCounts;
    void /* unknown type, empty encoding */ lastMicroLocationTimestamp;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
