@class NSString, NSMutableArray, PKPassShareInitiationContext;
@protocol PKPassShareActivationOverviewViewControllerDelegate;

@interface PKPassShareActivationOverviewNavigationController : PKNavigationController <PKPassShareActivationOverviewViewControllerDelegate, UISheetPresentationControllerDelegate> {
    PKPassShareInitiationContext *_context;
    id<PKPassShareActivationOverviewViewControllerDelegate> _delegate;
    NSMutableArray *_optionsToShow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)presentationControllerWillDismiss:(id)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)_showNextScreen;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)shareActivationOverviewViewControllerDidFinish:(id)a0;
- (void)shareActivationOverviewViewControllerDidSelectShareCode:(id)a0;

@end
