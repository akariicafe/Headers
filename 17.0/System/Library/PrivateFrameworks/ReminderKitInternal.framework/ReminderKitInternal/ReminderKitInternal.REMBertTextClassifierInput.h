@class NSSet;

@interface ReminderKitInternal.REMBertTextClassifierInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ input_ids;
    void /* unknown type, empty encoding */ attention_mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
