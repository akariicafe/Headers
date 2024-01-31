@class NSSet;

@interface IntelligencePlatformCore.NowPlayingSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ nowPlayingStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
