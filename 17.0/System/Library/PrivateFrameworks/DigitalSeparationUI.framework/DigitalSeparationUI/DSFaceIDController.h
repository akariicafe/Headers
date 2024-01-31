@class UINavigationController, LAContext, OBBoldTrayButton, NSString, CIDVUIBiometricBindingFlowManager;
@protocol DSNavigationDelegate;

@interface DSFaceIDController : DSOBWelcomeController <BKUIPearlEnrollControllerDelegate, DSController>

@property (retain, nonatomic) LAContext *authContext;
@property (retain, nonatomic) UINavigationController *faceIDEnrollmentNavigationController;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (retain, nonatomic) CIDVUIBiometricBindingFlowManager *_biometricBindingFlowManager;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAlternateAppearance;
+ (BOOL)isPearlEnrolled;
+ (BOOL)supportsPearl;
+ (id)pearlIdentities;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)pearlEnrollController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)beginFaceIDEnrollment;
- (void)configurePeriocularEnabled:(BOOL)a0;
- (void)deleteAllIdentities;
- (void)deleteGlobalAuthACL;
- (void)resetFaceID;
- (void)shouldShowWithCompletion:(id /* block */)a0;
- (void)updateFaceIDPaneConfiguration;

@end
