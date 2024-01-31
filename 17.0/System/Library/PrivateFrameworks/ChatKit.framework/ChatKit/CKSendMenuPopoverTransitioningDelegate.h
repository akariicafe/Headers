@class NSString, CKSendMenuPopoverPresentationConfiguration, CKSendMenuPopoverPresentationController;

@interface CKSendMenuPopoverTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) CKSendMenuPopoverPresentationController *presentationController;
@property (retain, nonatomic) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;

@end
