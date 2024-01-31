@class UILabel;

@interface GameCenterUI.AchievementHighlightCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ decorationView;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ wantsVerticalLayout;
    void /* unknown type, empty encoding */ achievementsTheme;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
