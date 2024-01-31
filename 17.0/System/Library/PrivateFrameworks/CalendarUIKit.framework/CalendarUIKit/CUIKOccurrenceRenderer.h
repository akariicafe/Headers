@interface CUIKOccurrenceRenderer : NSObject

+ (id)renderAttributedString:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 colorBarThickness:(double)a3 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 icon:(id)a5;
+ (id)renderColorBlockImageWithThickness:(double)a0 barColor:(struct CGColor { } *)a1 backgroundColor:(struct CGColor { } *)a2 stripeColor:(struct CGColor { } *)a3 stripedImageAlpha:(double)a4 colorBarStyle:(long long)a5;
+ (id /* block */)renderingBlockForAttributedString:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2 colorBarThickness:(double)a3 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 icon:(id)a5 outImageSize:(struct CGSize { double x0; double x1; } *)a6;

@end
