@class MRUViewServiceRoutingHeaderView, UITableView, MRUVisualStylingProvider, UIView, MRUViewServiceRoutingFooterView;

@interface MRUViewServiceRoutingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *alertView;
@property (readonly, nonatomic) MRUViewServiceRoutingHeaderView *headerView;
@property (readonly, nonatomic) MRUViewServiceRoutingFooterView *footerView;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long state;
@property (nonatomic) double preferredWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible;
@property (nonatomic) BOOL showAlertView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
