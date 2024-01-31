@class NSString;

@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol>

@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;

@end
