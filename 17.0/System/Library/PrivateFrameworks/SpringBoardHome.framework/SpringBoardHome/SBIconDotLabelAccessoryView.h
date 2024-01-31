@class UIImageView;

@interface SBIconDotLabelAccessoryView : SBIconLabelAccessoryView {
    UIImageView *_imageView;
}

+ (id)_dotColor;
+ (id)_cachedDotImage;
+ (void)_setCachedDotImage:(id)a0;
+ (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })_vibrantColorMatrixInput;
+ (id)labelAccessorySystemImageName;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)updateWithLegibilitySettings:(id)a0 labelFont:(id)a1;

@end
