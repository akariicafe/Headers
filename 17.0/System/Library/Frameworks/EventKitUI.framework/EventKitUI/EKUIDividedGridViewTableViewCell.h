@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell

@property (retain) EKUIDividedGridViewController *gridViewController;
@property (retain, nonatomic) UIView *topDivider;
@property (retain, nonatomic) UIView *bottomDivider;
@property (nonatomic) BOOL drawsTopDivider;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (BOOL)_isWiderThanMaximum;
- (BOOL)drawBottomDivider;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 gridViewType:(long long)a2 buttonTitles:(id)a3 cellBackgroundColor:(id)a4;
- (void)setDrawBottomDivider:(BOOL)a0;
- (BOOL)wantsDrawBackground;

@end
