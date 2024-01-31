@class PKPaletteToolPickerClippingEdgeView, NSString, PKPalettePassthroughView, NSArray, NSLayoutConstraint, PKPaletteToolPickerBackgroundContentView, UIView;

@interface PKPaletteToolPickerClippingView : UIView <PKPaletteViewSizeScaling> {
    PKPaletteToolPickerBackgroundContentView *_backgroundContentView;
    PKPalettePassthroughView *_contentOverlayView;
    PKPaletteToolPickerClippingEdgeView *_leadingEdgeView;
    PKPaletteToolPickerClippingEdgeView *_trailingEdgeView;
    PKPaletteToolPickerClippingEdgeView *_topEdgeView;
    PKPaletteToolPickerClippingEdgeView *_bottomEdgeView;
    NSArray *_edgeViews;
    NSArray *_edgeViewThicknessConstraints;
    NSLayoutConstraint *_leadingEdgeViewTopConstraint;
    NSLayoutConstraint *_trailingEdgeViewTopConstraint;
    NSLayoutConstraint *_topEdgeViewLeadingConstraint;
    NSLayoutConstraint *_topEdgeViewTrailingConstraint;
    NSLayoutConstraint *_bottomEdgeViewLeadingConstraint;
    NSLayoutConstraint *_bottomEdgeViewTrailingConstraint;
    BOOL _isVerticalRight;
    BOOL _leadingOrTopEdgeVisible;
    BOOL _trailingOrBottomEdgeVisible;
    UIView *_contentView;
    long long _layoutAxis;
}

@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
