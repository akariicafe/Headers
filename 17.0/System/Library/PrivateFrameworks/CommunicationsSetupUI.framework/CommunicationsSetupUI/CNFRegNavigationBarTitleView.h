@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) UINavigationItem *item;

- (void)dealloc;
- (id)_currentTextColorForBarStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (BOOL)_useSilverLookForBarStyle:(long long)a0;
- (id)_defaultFont;
- (id)initWithNavigationItem:(id)a0;
- (void).cxx_destruct;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTitleLabel;
- (id)_titleTextColorForBarStyle:(long long)a0;

@end
