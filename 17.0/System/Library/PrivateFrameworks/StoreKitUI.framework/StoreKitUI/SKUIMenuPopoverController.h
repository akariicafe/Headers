@class NSArray, NSString, SKUIMenuViewController, UIPopoverController;
@protocol SKUIMenuPopoverDelegate;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

@property (readonly, nonatomic) NSArray *menuTitles;
@property (weak, nonatomic) id<SKUIMenuPopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)dismissAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)popoverController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)_destroyPopoverController;
- (id)initWithMenuTitles:(id)a0;
- (id)initWithMenuTitles:(id)a0 selectedIndex:(long long)a1;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 permittedArrowDirections:(unsigned long long)a2 animated:(BOOL)a3;

@end
