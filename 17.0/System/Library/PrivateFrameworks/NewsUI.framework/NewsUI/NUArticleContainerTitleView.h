@class NUTitleView, NUPageStyle;

@interface NUArticleContainerTitleView : UIView

@property (readonly, nonatomic) NUTitleView *titleView;
@property (retain, nonatomic) NUPageStyle *pageStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyPageStyle:(id)a0;

@end
