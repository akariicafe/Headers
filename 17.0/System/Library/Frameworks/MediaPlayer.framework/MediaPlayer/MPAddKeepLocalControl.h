@class UIColor, NSMutableDictionary, UIImageView, UILabel, UIView, MPDownloadProgressView;

@interface MPAddKeepLocalControl : UIControl {
    UILabel *_controlTitleLabel;
    UIView *_backgroundView;
    UIImageView *_controlImageView;
    NSMutableDictionary *_controlStatusTypeToTitle;
    long long _controlStatusRevision;
    MPDownloadProgressView *_downloadProgressView;
    BOOL _hadFirstTouchHighlight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _controlImageEdgeInsets;
    UIView *_transientContentView;
    long long _transientContentViewTransactionCount;
    BOOL _traitCollectionDidChangeWasCalled;
}

@property (nonatomic) BOOL allowsAddImage;
@property (nonatomic) struct MPAddKeepLocalControlStatus { long long statusType; double downloadProgress; } controlStatus;
@property (nonatomic) long long displayStyle;
@property (nonatomic) BOOL scaleImageForAccessibility;
@property (retain, nonatomic) UIColor *filledTintColor;

+ (struct CGSize { double x0; double x1; })_expectedSizeForControlStatusType:(long long)a0 controlTitle:(id)a1 hasControlImage:(BOOL)a2 displayScale:(double)a3 preferredHeight:(double)a4;
+ (id)_imageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)_newControlTitleLabel;
+ (id)controlTitleFontForControlStatusType:(long long)a0;

- (void)setContentHorizontalAlignment:(long long)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)_removeAllAnimations:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumSizeWithPreferredHeight:(double)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)_beginTransientContentViewTransaction;
- (id)_currentContentSuperview;
- (void)_endTransientContentViewTransaction;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateControlImageViewAnimation;
- (void)_updateControlStatusProperties;
- (void)_updateControlTitleLabelVisualProperties;
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus { long long x0; double x1; })a0 animated:(BOOL)a1;
- (void)setTitle:(id)a0 forControlStatusType:(long long)a1;
- (id)titleForControlStatusType:(long long)a0;

@end
