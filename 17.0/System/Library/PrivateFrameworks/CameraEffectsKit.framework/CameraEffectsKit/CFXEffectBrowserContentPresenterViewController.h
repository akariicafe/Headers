@class NSString;
@protocol CFXEffectBrowserContentPresenterViewControllerDelegate;

@interface CFXEffectBrowserContentPresenterViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate>

@property (weak, nonatomic) id<CFXEffectBrowserContentPresenterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)effectBrowserViewController:(id)a0 dismissExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)effectBrowserViewController:(id)a0 presentExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)a0;
- (double)CFX_alwaysExpandedAppHeight;
- (id)CFX_constraintsForAlwaysExpandedAppView:(id)a0 containerView:(id)a1;
- (void)configureEffectBrowserContentPresentationForOrientation:(long long)a0;

@end
