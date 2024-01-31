@interface _IFValueTransformer : NSValueTransformer

@property (readonly, copy, nonatomic) id /* block */ forwardTransformation;
@property (readonly, copy, nonatomic) id /* block */ reverseTransformation;

+ (BOOL)allowsReverseTransformation;

- (id)reverseTransformedValue:(id)a0;
- (id)initWithForwardTransformation:(id /* block */)a0 reverseTransformation:(id /* block */)a1;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
