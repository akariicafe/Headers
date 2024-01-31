@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {
    UIImageView *_warningIconView;
}

- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_subtitleFont;
- (void)layoutSubviews;
- (BOOL)_statusBarOrientationIsPortrait;
- (double)_iconYPosition;
- (double)_subtitleBaseline;
- (double)_titleBaseline;

@end
