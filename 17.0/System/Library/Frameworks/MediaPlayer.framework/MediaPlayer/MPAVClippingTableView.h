@class NSMutableDictionary, UIView;

@interface MPAVClippingTableView : UITableView

@property (retain, nonatomic) NSMutableDictionary *sectionBackgroundViews;
@property (retain, nonatomic) UIView *headerBackgroundView;
@property (retain, nonatomic) UIView *footerBackgroundView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)_createBackgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundViewForSection:(unsigned long long)a0;

@end
