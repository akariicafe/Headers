@class NSArray;

@interface _UIAnimatedImage : UIImage {
    NSArray *_images;
    double _duration;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInPixels;
- (void)_setAlwaysStretches:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentStretchInPixels;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { double x0; double x1; })a0;
- (id)images;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (BOOL)_isResizable;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)resizingMode;
- (id)_bezeledImageWithShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 fillRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 drawShadow:(BOOL)a8;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 interiorShadowRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 fillRed:(double)a8 green:(double)a9 blue:(double)a10 alpha:(double)a11;
- (void)_horizontallyFlipImageOrientation;
- (id)_imageScaledToProportion:(double)a0 interpolationQuality:(int)a1;
- (id)_imageWithStylePresets:(id)a0 tintColor:(id)a1 traitCollection:(id)a2;
- (id)_initWithOtherImage:(id)a0;
- (BOOL)_isPDFVector;
- (BOOL)_isSVGVector;
- (void)_mirrorImageOrientation;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })_sizeWithHairlineThickening:(BOOL)a0 renderingEffects:(unsigned long long)a1 forTraitCollection:(id)a2;
- (id)initWithImages:(id)a0 duration:(double)a1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 resizingMode:(long long)a1;

@end
