@class NSSet;

@interface IntelligencePlatformCore.DiningOutModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ POI;
    void /* unknown type, empty encoding */ PassKit;
    void /* unknown type, empty encoding */ FIA;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
