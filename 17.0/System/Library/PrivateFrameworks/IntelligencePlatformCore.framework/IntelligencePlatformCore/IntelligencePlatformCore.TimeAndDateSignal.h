@class NSSet;

@interface IntelligencePlatformCore.TimeAndDateSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ dateFetcher;
    void /* unknown type, empty encoding */ calendar;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
