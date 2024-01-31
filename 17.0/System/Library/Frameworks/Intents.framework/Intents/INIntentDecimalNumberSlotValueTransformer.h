@interface INIntentDecimalNumberSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
