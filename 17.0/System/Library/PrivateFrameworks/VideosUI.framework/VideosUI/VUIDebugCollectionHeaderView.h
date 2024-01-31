@class VUILabel, VUISeparatorView, VUITextLayout;

@interface VUIDebugCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *separatorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureHeaderViewWithTitle:(id)a0;

@end
