@class SKUIClientContext, SKUIColorScheme;
@protocol SKUISwooshViewControllerDelegate;

@interface SKUISwooshViewController : UIViewController

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (weak, nonatomic) id<SKUISwooshViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)deselectAllItems;
- (id)indexPathsForVisibleItems;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (id)popImageViewForItemAtIndex:(long long)a0;
- (void)unhideImages;

@end
