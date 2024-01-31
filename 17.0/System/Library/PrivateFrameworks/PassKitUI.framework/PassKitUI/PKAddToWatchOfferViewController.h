@class NSString, PKHeroCardWatchExplainationHeaderView, UIView, PKSecureElementPass;

@interface PKAddToWatchOfferViewController : PKExplanationViewController <PKLoadingUIProviding> {
    UIView *_interactionDisabledView;
    PKHeroCardWatchExplainationHeaderView *_heroView;
}

@property (readonly, retain, nonatomic) PKSecureElementPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)edgesForExtendedLayout;
- (void)_addLater;
- (void)_addToWatch;
- (void)_clearInteractionDisabledView;
- (void)_configureNavigationItem;
- (void)_setIdleTimerDisabled:(BOOL)a0;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch;
- (id)initWithPass:(id)a0 context:(long long)a1;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;
- (void)showSpinner:(BOOL)a0;

@end
