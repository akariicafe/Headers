@class SUUIItem, NSArray, SUUIClientContext, NSString, UIView, SUUIOverlayContainerViewController, UIViewController;
@protocol SUUIProductPageOverlayDelegate;

@interface SUUIProductPageOverlayController : NSObject <SUUIIPadProductPageDelegate, SKStoreProductViewControllerDelegate> {
    SUUIItem *_initialItem;
    SUUIOverlayContainerViewController *_overlayViewController;
}

@property (readonly, weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUIProductPageOverlayDelegate> delegate;
@property (readonly, nonatomic) long long numberOfVisibleOverlays;
@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (void)_showWithInitialViewController:(id)a0;
- (void)_backstopViewAction:(id)a0;
- (void)_finishDismissAndNotifyDelegate:(BOOL)a0 withViewController:(id)a1;
- (void)_removeOverlayViewController;
- (void)_showOverlayViewController;
- (void)iPadProductPage:(id)a0 openItem:(id)a1;
- (void)iPadProductPage:(id)a0 openURL:(id)a1 viewControllerBlock:(id /* block */)a2;
- (void)iPadProductPageCannotOpen:(id)a0;
- (id)initWithParentViewController:(id)a0;
- (void)showWithInitialItem:(id)a0;
- (void)showWithInitialItemIdentifier:(long long)a0;
- (void)showWithInitialProductPage:(id)a0 metricsPageEvent:(id)a1;
- (void)showWithInitialURL:(id)a0;
- (void)showWithInitialURLRequest:(id)a0;
- (void)showWithInitialURLs:(id)a0;

@end
