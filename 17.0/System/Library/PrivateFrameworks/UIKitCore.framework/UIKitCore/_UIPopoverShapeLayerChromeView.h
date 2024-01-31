@class UIVisualEffectView, _UIPopoverShapeLayerView;

@interface _UIPopoverShapeLayerChromeView : _UIPopoverStandardChromeView {
    UIVisualEffectView *_blurView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    _UIPopoverShapeLayerView *_shapeLayerMaskView;
    _UIPopoverShapeLayerView *_shapeLayerStrokeView;
}

+ (double)arrowHeight;
+ (double)cornerRadius;
+ (double)arrowBase;

- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)_updateStrokeViewColor;
- (id)backgroundEffect;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinnedArrowSide:(long long)a1;
- (long long)backgroundStyle;
- (double)_shadowRadius;
- (BOOL)usesImagesForShapeMasking;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_generateTopArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 pinnedArrowSide:(long long)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setArrowOffset:(double)a0;
- (void)_generateRightArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 pinnedArrowSide:(long long)a5;
- (id)createShapeLayerPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)minNonPinnedOffset;
- (void)_createStrokeView;
- (double)_shadowOpacity;
- (double)maxNonPinnedOffset;
- (struct CGPoint { double x0; double x1; })_addLineWithSlightTrailingAndLeadingCurveToPath:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 leadingEdge:(BOOL)a3 isVertical:(BOOL)a4;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)a0;
- (id)_shadowPath;
- (long long)_resolvedBackgroundStyle;
- (void)_generateBottomArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 pinnedArrowSide:(long long)a5;
- (void)_loadNecessaryViews;
- (void)setBackgroundStyle:(long long)a0;
- (struct CGPoint { double x0; double x1; })_addArrowCurveToPath:(id)a0 direction:(unsigned long long)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 pinnedArrowSide:(long long)a5;
- (void)layoutSubviews;
- (void)_generateLeftArrowShapeInPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 pinnedArrowSide:(long long)a5;
- (void)_updateShapeLayerPath;
- (void)_removeEffectView;
- (void)didMoveToWindow;
- (void)_configureEffectView;
- (long long)_pinnedArrowSide;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinnedArrowSide:(long long)a1;
- (void)_updateBackgroundStyle;

@end
