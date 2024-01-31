@interface XRSecureUnarchiveFromDataTransformer : NSValueTransformer

+ (void)addWhitelistedClass:(Class)a0;
+ (id)whitelistedClassesForTransforming;

- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
