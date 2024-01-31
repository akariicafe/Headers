@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    double _baselineOffsetFromBottom;
}

@property (readonly, copy, nonatomic) SBIconLabelImageParameters *parameters;

+ (double)legibilityStrengthForLegibilityStyle:(long long)a0;
+ (id)imageWithParameters:(id)a0 pool:(id)a1;
+ (BOOL)needsLegibilityImageForParameters:(id)a0;
+ (void)applyKerning:(double)a0 whitespaceKerning:(double)a1 toAttributedString:(id)a2;
+ (struct CGSize { double x0; double x1; })_maxLegibilityImageSizeForLabelSize:(struct CGSize { double x0; double x1; })a0;
+ (id)imageWithParameters:(id)a0;
+ (BOOL)attributedText:(id)a0 fitsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

- (double)baselineOffsetFromBottom;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)hasBaseline;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2 parameters:(id)a3 alignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 baselineOffsetFromBottom:(double)a5;

@end
