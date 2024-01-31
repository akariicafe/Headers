@interface EDAccountECAccountTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)transformAccount:(id)a0;
- (id)transformDeliveryAccount:(id)a0;
- (id)transformReceivingAccount:(id)a0;

@end
