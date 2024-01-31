@class NSArray, UILabel, UIView, UIViewController;

@interface SHSHeadphoneNotificationTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    NSArray *_constraints;
    NSArray *_notificationData;
    UIView *_notificationChart;
    BOOL _shouldHideChart;
    UIViewController *_hostingController;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)accessibilityConstraintsWithVariableBindings:(id)a0 metrics:(id)a1 hideChart:(BOOL)a2;
- (id)regularConstraintsWithVariableBindings:(id)a0 metrics:(id)a1 hideChart:(BOOL)a2;

@end
