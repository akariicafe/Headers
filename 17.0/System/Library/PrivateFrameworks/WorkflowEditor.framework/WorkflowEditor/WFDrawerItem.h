@class NSString, UIView, UISearchBar, UIViewController;
@protocol WFDrawerPane;

@interface WFDrawerItem : NSObject

@property (weak, nonatomic) UIViewController<WFDrawerPane> *drawerPane;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (nonatomic) double fauxHeaderHeight;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithDrawerPane:(id)a0;

@end
