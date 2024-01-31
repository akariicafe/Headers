@class NSSet;

@interface VoiceActions.AutoG2P8BInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ input_ids;
    void /* unknown type, empty encoding */ input_mask;
    void /* unknown type, empty encoding */ output_ids;
    void /* unknown type, empty encoding */ output_mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
