@class AMSUIWebView, NSString, AMSUIWebClientContext, AMSUIWebAppOverlayViewController, NSURL, AMSUIWebAppearance, AMSUIWebPageModel;
@protocol AMSUIWebPageViewControllerDelegate;

@interface AMSUIWebPageViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPagePresenter>

@property (readonly, nonatomic) AMSUIWebAppearance *appearance;
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) AMSUIWebAppOverlayViewController *appOverlayViewController;
@property (retain, nonatomic) AMSUIWebPageModel *model;
@property (retain, nonatomic) NSURL *URL;
@property (weak, nonatomic) id<AMSUIWebPageViewControllerDelegate> delegate;
@property (readonly, nonatomic) AMSUIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_updateLayout;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)loadRequest:(id)a0;
- (id)_appOverlayTransitioning;
- (void)_applyAppearance;
- (void)_didEncodeRequest:(id)a0;
- (void)_downloadHTMLForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_updateToolbarButtonItems;
- (void)_willEncodeRequest:(id)a0;
- (id)dismissAppOverlay;
- (id)initWithContext:(id)a0 dataProvider:(id)a1;
- (id)presentAppOverlayWithAdamID:(id)a0;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
