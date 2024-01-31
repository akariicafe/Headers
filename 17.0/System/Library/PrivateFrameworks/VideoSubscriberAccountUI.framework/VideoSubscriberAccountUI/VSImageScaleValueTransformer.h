@interface VSImageScaleValueTransformer : NSValueTransformer

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
