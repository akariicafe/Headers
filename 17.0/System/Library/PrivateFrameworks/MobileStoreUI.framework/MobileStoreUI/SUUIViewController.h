@class SUUIProductPageOverlayController, NSString, SUUIWishlistViewController, SUUIClientContext, NSOperationQueue, SUUINetworkErrorViewController, SUUIIPadSearchController, UIBarButtonItem, SUUIPopoverObserver;

@interface SUUIViewController : UIViewController <SUUINetworkErrorDelegate, SUUIProductPageOverlayDelegate, UIPopoverControllerDelegate, SUUITabBarItemRootViewController, SUUIClientContextConsuming, SUUIWishlistDelegate> {
    SUUINetworkErrorViewController *_networkErrorViewController;
    SUUIProductPageOverlayController *_productPageOverlayController;
    SUUIIPadSearchController *_searchController;
    BOOL _wishlistButtonHidden;
    SUUIPopoverObserver *_wishlistPopoverObserver;
    SUUIWishlistViewController *_wishlistViewController;
}

@property (readonly, nonatomic) UIBarButtonItem *_wishlistButtonItem;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) SUUIIPadSearchController *IPadSearchController;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)reloadData;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)showError:(id)a0;
- (BOOL)showingError;
- (id)_defaultLeftBarButtonItems;
- (id)_defaultRightBarButtonItemsIsCompact:(BOOL)a0;
- (id)_getIPadSearchController;
- (void)_presentWishlistFromPopover:(id)a0;
- (void)_presentWishlistFromSheet;
- (void)_reloadForOrientation:(long long)a0;
- (void)_setWishlistButtonHidden:(BOOL)a0;
- (void)_showDialogWithError:(id)a0;
- (void)_wishlistAction:(id)a0;
- (void)_wishlistPopoverDidDismiss;
- (void)forceOrientationBackToSupportedOrientation;
- (id)initWithTabBarItem:(id)a0;
- (void)networkErrorViewControllerInvalidated:(id)a0;
- (void)productPageOverlayDidDismiss:(id)a0;
- (void)showDefaultNavigationItems;
- (void)showDefaultNavigationItemsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)showDefaultNavigationItemsIsCompact:(BOOL)a0;
- (void)wishlist:(id)a0 didSelectItem:(id)a1 atIndexPath:(id)a2;
- (void)suui_viewWillAppear:(BOOL)a0;

@end
