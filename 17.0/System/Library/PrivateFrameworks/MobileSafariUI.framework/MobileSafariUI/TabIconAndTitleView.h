@class UIImageView, UILabel, SFUnreadIndicator;

@interface TabIconAndTitleView : UIView {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    BOOL _usesAccessibilityContentSizeCategory;
    SFUnreadIndicator *_unreadIndicator;
    BOOL _showsUnreadIndicator;
    long long _alignment;
}

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
