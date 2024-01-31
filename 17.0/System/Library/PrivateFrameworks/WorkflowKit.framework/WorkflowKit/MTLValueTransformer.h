@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling>

@property (readonly, copy, nonatomic) id /* block */ forwardBlock;
@property (readonly, copy, nonatomic) id /* block */ reverseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;
+ (id)reversibleTransformerWithBlock:(id /* block */)a0;
+ (id)reversibleTransformerWithForwardBlock:(id /* block */)a0 reverseBlock:(id /* block */)a1;
+ (id)transformerUsingForwardBlock:(id /* block */)a0;
+ (id)transformerUsingReversibleBlock:(id /* block */)a0;
+ (id)transformerWithBlock:(id /* block */)a0;

@end
