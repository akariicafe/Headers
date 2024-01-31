@class NSString, NSTimer, CEKBadgeTextView, CAMSemanticStyle;

@interface CAMSemanticStyleMaskedBadge : UIView

@property (retain, nonatomic) NSTimer *_badgeUpdateLockoutTimer;
@property (retain, nonatomic) NSString *_cachedText;
@property (readonly, nonatomic) CEKBadgeTextView *badgeView;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;
@property (nonatomic) double badgeLeftInset;
@property (nonatomic) long long orientation;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticStyle:(id)a0 delayIfNeeded:(BOOL)a1;
- (void)_handleBadgeUpdateLockoutTimerFired:(id)a0;
- (void)_requestTextUpdateDelayIfNeeded:(BOOL)a0;

@end
