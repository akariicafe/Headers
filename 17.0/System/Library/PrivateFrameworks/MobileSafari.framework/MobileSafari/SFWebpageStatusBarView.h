@class UILabel, NSTimer, UIView;
@protocol SFWebPageStatusBarMessage;

@interface SFWebpageStatusBarView : UIView {
    UILabel *_statusLabel;
    UIView *_statusBarContentView;
    BOOL _shouldDodgeHoverPoint;
    NSTimer *_dismissStatusBarEnabledTimer;
}

@property (retain, nonatomic) id<SFWebPageStatusBarMessage> statusMessage;
@property (nonatomic) struct CGPoint { double x; double y; } hoverPoint;
@property (nonatomic) BOOL suppressShowingStatusBar;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_clearStatusBarIsEnabledMessage;
- (void)_cancelPendingStatusBarHideIfNeeded;
- (void)_hideStatusBar;
- (struct CGPoint { double x0; double x1; })_originForStatusBarContentViewForContentHeight:(double)a0;
- (void)_showStatusBar;
- (void)clearStatus;
- (void)displayStatusBarIsEnabledMessage;

@end
