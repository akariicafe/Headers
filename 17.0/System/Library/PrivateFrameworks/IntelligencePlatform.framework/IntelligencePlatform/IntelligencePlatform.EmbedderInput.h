@class NSSet;

@interface IntelligencePlatform.EmbedderInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ encoderCharInput;
    void /* unknown type, empty encoding */ encoderBPEInput;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
