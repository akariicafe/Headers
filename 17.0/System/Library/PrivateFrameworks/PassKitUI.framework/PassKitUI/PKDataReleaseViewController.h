@class NSString, PKDataReleaseContentViewController;
@protocol PKDataReleaseViewControllerDelegate;

@interface PKDataReleaseViewController : PKPaymentAuthorizationServiceCompactNavigationContainerController <PKDataReleaseContentViewControllerDelegate> {
    id<PKDataReleaseViewControllerDelegate> _dataReleaseDelegate;
    PKDataReleaseContentViewController *_vc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)_updateExclustionRectWithButtonPresent:(BOOL)a0;
- (void)_updatePhysicalButtonWithVC:(id)a0;
- (void)dataReleaseCompletedWithError:(id)a0;
- (void)dataReleaseContentViewController:(id)a0 didAuthorizeWithExternalAuthorizationData:(id)a1 dataToRelease:(id)a2;
- (void)dataReleaseContentViewController:(id)a0 didFinishWithError:(id)a1;
- (void)dataReleaseContentViewController:(id)a0 didResolveToMerchant:(id)a1;
- (void)dataReleaseContentViewControllerDidChangePhysicalButtonState:(id)a0;

@end
