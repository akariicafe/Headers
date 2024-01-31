@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator

@property (retain, nonatomic) UIColor *gradientColor;
@property (nonatomic) unsigned long long blurType;
@property (nonatomic) unsigned long long blurStyle;

- (void).cxx_destruct;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;
- (id)decoratorIdentifier;

@end
