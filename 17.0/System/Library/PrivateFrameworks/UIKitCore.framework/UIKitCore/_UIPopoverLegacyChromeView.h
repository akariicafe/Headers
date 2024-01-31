@class UIVisualEffectView, UIView;

@interface _UIPopoverLegacyChromeView : _UIPopoverStandardChromeView {
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _popoverBackgroundColorIsOpaque;
    BOOL _arrowVisible;
    BOOL _wasPinned;
}

@property (readonly, nonatomic) UIView *arrowView;
@property (readonly, nonatomic) UIView *leftCapView;
@property (readonly, nonatomic) UIView *rightCapView;
@property (readonly, nonatomic) BOOL hasComponentViews;

+ (double)arrowHeight;
+ (double)arrowBase;

- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setArrowBackgroundColor:(id)a0;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (double)_shadowRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)setArrowOffset:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)minNonPinnedOffset;
- (double)_shadowOpacity;
- (BOOL)isPinned;
- (double)maxNonPinnedOffset;
- (double)arrowOffset;
- (void).cxx_destruct;
- (id)_shadowPath;
- (long long)_resolvedBackgroundStyle;
- (void)_loadNecessaryViews;
- (void)setBackgroundStyle:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setPopoverBackgroundColor:(id)a0;
- (void)_removeEffectView;
- (void)didMoveToWindow;
- (void)_configureEffectView;
- (void)_updateBackgroundStyle;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_resetComponentViews;
- (void)_updateChrome;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (BOOL)useShortMode;

@end
