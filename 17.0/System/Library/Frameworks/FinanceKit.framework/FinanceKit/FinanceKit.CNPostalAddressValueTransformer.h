@interface FinanceKit.CNPostalAddressValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
