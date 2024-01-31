@class NSString;

@interface Heart.ElectrocardiogramUpdateViewController : UIViewController <HRElectrocardiogramOnboardingManagerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ onboardingManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tileView;
    void /* unknown type, empty encoding */ detail;
    void /* unknown type, empty encoding */ deselectionBehavior;
}

@property (nonatomic, copy) NSString *title;

- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
