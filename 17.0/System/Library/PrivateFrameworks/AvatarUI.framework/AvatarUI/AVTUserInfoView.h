@class UIColor, NSArray, UIVisualEffectView, NSString, UILabel;

@interface AVTUserInfoView : UIView

@property (class, readonly, nonatomic) double textVerticalPadding;

@property (nonatomic) BOOL isRegisteredForCategorySizeChange;
@property (retain, nonatomic) UIVisualEffectView *userInfoEffectView;
@property (retain, nonatomic) UILabel *userInfoLabel;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } textInsets;
@property (nonatomic) UIColor *containerBackgroundColor;

- (void)_configure;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
