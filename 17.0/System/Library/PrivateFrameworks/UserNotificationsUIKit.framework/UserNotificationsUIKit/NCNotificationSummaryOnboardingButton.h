@class UIView;

@interface NCNotificationSummaryOnboardingButton : UIButton {
    UIView *_backgroundView;
}

- (void)_configureBackgroundViewIfNecessary;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutBackgroundView;

@end
