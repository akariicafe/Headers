@class NSString, NSArray, UINavigationController, SKUIOverlayContainerViewController, SKUIClientContext, SKUIStoreDialogController, SKUIReportAConcernViewController, NSMutableArray, UIViewController, UIPopoverController;
@protocol SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, UINavigationControllerDelegate, SKUIModalSourceViewProvider;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate> {
    NSMutableArray *_composeReviewViewControllers;
    SKUIStoreDialogController *_dialogController;
    SKUIReportAConcernViewController *_reportAConcernViewController;
    NSMutableArray *_giftViewControllers;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIPopoverController *_popoverController;
    NSMutableArray *_stackItems;
}

@property (readonly, nonatomic) SKUIOverlayContainerViewController *_overlayViewController;
@property (readonly, nonatomic) UINavigationController *_overlayNavigationController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIModalDocumentDataSource> dataSource;
@property (weak, nonatomic) id<SKUIModalDocumentDelegate> delegate;
@property (weak, nonatomic) id<SKUIModalSourceViewProvider> modalSourceViewProvider;
@property (weak, nonatomic) id<UINavigationControllerDelegate> navigationControllerDelegate;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) NSArray *documents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)familySetupViewController:(id)a0 didCompleteWithSuccess:(BOOL)a1;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (id)_presenterViewController;
- (void)popAllDocuments;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerRect:(id)a0 adjust:(BOOL)a1;
- (void)_composeReviewViewControllerDidFinish:(id)a0 finished:(BOOL)a1;
- (void)_dismissOverlayControllerWithStackItem:(id)a0 animated:(BOOL)a1;
- (void)_garbageCollectActivityViewController:(id)a0;
- (id)_imageForImageViewElement:(id)a0;
- (id)_modalSourceViewProviderFromStackItems;
- (void)_overlayControllerBackstopAction:(id)a0;
- (id)_overlayStackItems;
- (void)_popDocument:(BOOL)a0 completion:(id /* block */)a1;
- (void)_popDocumentSkippingUserInterfaceUpdates;
- (void)_popOverlayStackItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_popPopoverStackItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_popoverController:(id)a0 containsStackItem:(id)a1;
- (void)_presentAlertForDialog:(id)a0;
- (void)_presentOverlayViewControllersFromNavigationController:(id)a0;
- (void)_presetPopoverSheetDocument:(id)a0 viewController:(id)a1 popoverPresentationController:(id)a2;
- (void)_promptForStarRating:(id)a0;
- (void)_pushCharityDocument:(id)a0 options:(id)a1;
- (void)_pushDialogDocument:(id)a0 options:(id)a1;
- (void)_pushFamilySetupDocument:(id)a0 options:(id)a1;
- (void)_pushGiftDocument:(id)a0 options:(id)a1;
- (void)_pushOverlayStackItem:(id)a0;
- (void)_pushPlaylistDocument:(id)a0 options:(id)a1;
- (void)_pushPopoverSheetDocument:(id)a0 viewController:(id)a1 popoverPresentationController:(id)a2 options:(id)a3;
- (void)_pushPopoverStackItem:(id)a0;
- (void)_pushRedeemDocument:(id)a0 options:(id)a1;
- (void)_pushSheetDocument:(id)a0 viewController:(id)a1;
- (void)_pushSheetStackItem:(id)a0;
- (void)_sendDidFinishIfApplicable;
- (id)_showOverlayContainerViewController;
- (void)_unloadDocumentForPopoverController:(id)a0;
- (void)_unloadDocumentForViewController:(id)a0;
- (void)composeReviewViewController:(id)a0 didFailWithDialog:(id)a1;
- (void)composeReviewViewController:(id)a0 didSubmitWithEdit:(BOOL)a1;
- (void)composeReviewViewController:(id)a0 presentDialog:(id)a1;
- (BOOL)composeReviewViewController:(id)a0 shouldSubmitReview:(id)a1;
- (void)composeReviewViewControllerDidCancel:(id)a0;
- (void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)a0;
- (void)giftViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (id)navigationDocumentForDocument:(id)a0;
- (id)navigationDocumentForNavigationController:(id)a0;
- (void)overlayContainerViewController:(id)a0 willPopViewController:(id)a1;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)presentOverlayViewControllersFromNavigationController:(id)a0;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;
- (void)setOverlayNavigationController:(id)a0 withTransitionCoordinator:(id)a1;
- (void)unloadDocumentForViewController:(id)a0;

@end
