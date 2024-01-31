@class HKHealthPrivacyHostObjectPickerViewController, _UIAsyncInvocation, NSString, UIViewController;

@interface HKObjectPickerPresentationController : NSObject <HKHealthPrivacyHostObjectPickerViewControllerDelegate, _HKObjectPickerPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostObjectPickerViewController *hostViewController;
@property (nonatomic) BOOL didPresent;
@property (weak, nonatomic) UIViewController *viewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelPresentation;
- (void)presentWithSession:(id)a0 authorizationViewControllerPresenter:(id)a1 completion:(id /* block */)a2;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)healthPrivacyHostObjectPickerViewController:(id)a0 didFinishWithError:(id)a1;
- (void)_makeRemoteViewControllerVisible:(id)a0;
- (void)_presentWithPromptSession:(id)a0 completion:(id /* block */)a1;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;

@end
