@interface ChatKit.SendMenuCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ titleBlurContainerView;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ iconBlurContainerView;
    void /* unknown type, empty encoding */ sendMenuCellDelegate;
    void /* unknown type, empty encoding */ iconWidthConstraint;
    void /* unknown type, empty encoding */ iconHeightConstraint;
    void /* unknown type, empty encoding */ iconToEdgeHorizontalConstraint;
    void /* unknown type, empty encoding */ iconToLabelHorizontalConstraint;
    void /* unknown type, empty encoding */ iconToTopConstraint;
    void /* unknown type, empty encoding */ iconToBottomConstraint;
    void /* unknown type, empty encoding */ selectionStateScale;
    void /* unknown type, empty encoding */ sendMenuItemImageForLightMode;
    void /* unknown type, empty encoding */ sendMenuCustomIconLayer;
    void /* unknown type, empty encoding */ sendMenuItemImageForDarkMode;
    void /* unknown type, empty encoding */ sendMenuItemImageCompositingFilterForLightMode;
    void /* unknown type, empty encoding */ sendMenuItemImageCompositingFilterForDarkMode;
    void /* unknown type, empty encoding */ sendMenuItemImageInsets;
    void /* unknown type, empty encoding */ titleLabelSectionHiddenBlurFilterRadius;
    void /* unknown type, empty encoding */ titleLabelSendMenuAppearanceAnimationBlurFilterRadius;
    void /* unknown type, empty encoding */ titleLabelScrollViewEdgeBlurFilterRadius;
    void /* unknown type, empty encoding */ iconImageViewSectionHiddenBlurFilterRadius;
    void /* unknown type, empty encoding */ iconImageViewSendMenuAppearanceAnimationBlurFilterRadius;
    void /* unknown type, empty encoding */ iconImageViewScrollViewEdgeBlurFilterRadius;
    void /* unknown type, empty encoding */ iconImageViewSectionHiddenOpacity;
    void /* unknown type, empty encoding */ iconImageViewAppearanceAnimationOpacity;
    void /* unknown type, empty encoding */ iconImageViewScrollViewEdgeOpacity;
    void /* unknown type, empty encoding */ titleLabelSectionHiddenOpacity;
    void /* unknown type, empty encoding */ titleLabelScrollViewEdgeOpacity;
    void /* unknown type, empty encoding */ titleLabelAppearanceAnimationOpacity;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;

@end
