@class AMAmbientDefaults, NSString, AMUIOnboardingContainerView;
@protocol AMUIOnboardingViewControllerDelegate;

@interface AMUIOnboardingViewController : UIViewController <AMUIOnboardingContainerViewDelegate> {
    AMUIOnboardingContainerView *_onboardingContainerView;
}

@property (weak, nonatomic) id<AMUIOnboardingViewControllerDelegate> delegate;
@property (weak, nonatomic) AMAmbientDefaults *ambientDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)performDismissalAnimation;
- (void)performPresentationAnimation;
- (void)onboardingContainerView:(id)a0 requestsDismissalWithUserIntent:(BOOL)a1;

@end
