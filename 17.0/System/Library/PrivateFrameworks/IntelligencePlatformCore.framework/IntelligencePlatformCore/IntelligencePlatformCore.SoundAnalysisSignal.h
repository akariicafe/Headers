@class NSSet;

@interface IntelligencePlatformCore.SoundAnalysisSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ rawFeatureNames;
    void /* unknown type, empty encoding */ lookBackWindowInSecs;
    void /* unknown type, empty encoding */ soundAnalysisStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
