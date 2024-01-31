@class SUUIColorScheme, SUUIClientContext;
@protocol SUUISwooshViewControllerDelegate;

@interface SUUISwooshViewController : UIViewController

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (copy, nonatomic) SUUIColorScheme *colorScheme;
@property (weak, nonatomic) id<SUUISwooshViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)deselectAllItems;
- (id)indexPathsForVisibleItems;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (id)popImageViewForItemAtIndex:(long long)a0;
- (void)unhideImages;

@end
