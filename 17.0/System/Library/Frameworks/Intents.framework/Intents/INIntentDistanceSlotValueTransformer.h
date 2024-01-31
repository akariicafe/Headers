@interface INIntentDistanceSlotValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)_intents_resolutionResultClass;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
