@class NSArray;

@interface OFLinearGradientView : OFUIView

@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (void)dealloc;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)gradientLayer;

@end
