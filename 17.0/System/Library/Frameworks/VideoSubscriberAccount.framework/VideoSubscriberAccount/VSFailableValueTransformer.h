@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSValueTransformer *objectValueTransformer;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
