@class UIView, NSString, UIControl, UIButton, UICollectionView, SUUILinkButton, UILabel, UIColor;

@interface SUUISwooshView : UIView {
    UIView *_borderView;
    UIButton *_seeAllButton;
    SUUILinkButton *_titleButton;
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInsets;
@property (readonly, nonatomic) UIControl *seeAllControl;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (readonly, nonatomic) UIControl *chevronTitleControl;
@property (nonatomic) BOOL showsChevronForTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSeeAllColor:(id)a0 forControlState:(unsigned long long)a1;
- (id)_seeAllArrowImage;
- (id)seeAllColorForControlState:(unsigned long long)a0;
- (void)setColoringWithColorScheme:(id)a0;

@end
