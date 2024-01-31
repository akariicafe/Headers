@interface HMDIdentityTransformer : HMDValueTransformer

+ (Class)valueClass;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)a0 error:(id *)a1;
- (id)transformedValue:(id)a0 error:(id *)a1;

@end
