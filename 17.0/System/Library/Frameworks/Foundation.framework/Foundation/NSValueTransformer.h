@interface NSValueTransformer : NSObject

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;
- (id)_initForFoundationOnly;

@end
