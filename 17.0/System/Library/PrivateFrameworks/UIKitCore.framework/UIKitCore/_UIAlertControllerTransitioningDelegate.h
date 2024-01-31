@class NSString, UIInteractionProgress;

@interface _UIAlertControllerTransitioningDelegate : NSObject <UIForceTransitioningDelegate>

@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForPresentation:(id)a0;
- (void).cxx_destruct;
- (id)_interactionControllerForTransitionOfType:(long long)a0 forAlertController:(id)a1;

@end
