@class UITableView, UIView;
@protocol RemoteUITableFooter, RUIHeader;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView;
@property (weak) UITableView *tableView;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_embedContentView:(id)a0;
- (BOOL)_useLegacyLayout;
- (void)embedFooterView:(id)a0;
- (void)embedHeaderView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForHeaderFooter;
- (void)removeEmbeddedView;

@end
