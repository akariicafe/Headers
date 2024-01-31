@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSArray *valueTransformers;

- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
