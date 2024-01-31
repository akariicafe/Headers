@interface _UIResizableImage : UIImage {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _subimageInsets;
    struct { unsigned char alwaysStretches : 1; unsigned char isSubimage : 1; } _rImageFlags;
}

+ (BOOL)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInPixels;
- (void)_setAlwaysStretches:(BOOL)a0;
- (void)_setCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setSubimageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentStretchInPixels;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (BOOL)_suppressesAccessibilityHairlineThickening;
- (id)_resizableImageWithCapMask:(int)a0;
- (BOOL)_isResizable;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_subimageInsets;
- (id)initWithImage:(id)a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)_isSubimage;
- (BOOL)isEqual:(id)a0;
- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInPixelsApplyingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 emptySizeFallback:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (long long)resizingMode;

@end
