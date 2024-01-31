@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (BOOL)allowsReverseTransformation;
+ (id)name;
+ (Class)transformedValueClass;
+ (void)registerTransformer;

- (id)reverseTransformedValue:(id)a0;
- (id)allowedTopLevelClasses;
- (id)transformedValue:(id)a0;

@end
