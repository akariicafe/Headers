@class PKPaymentSetupAssistantController, BYFlowSkipController, BYPaneFeatureAnalyticsManager, NSString, NSObject, UIViewController;
@protocol BFFFinishSetupFlowHosting;

@interface BFFFinishSetupPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling> {
    NSObject<BFFFinishSetupFlowHosting> *_host;
    UIViewController *_registrationViewController;
    PKPaymentSetupAssistantController *_paymentController;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BYFlowSkipController *flowSkipController;
@property (retain, nonatomic) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishSetupPaymentControllerWithHost:(id)a0;
+ (BOOL)hasPrimaryiCloudAccount;
+ (unsigned long long)registrationViewControllerOutstandingRequirements;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (BOOL)controllerNeedsToRun;
- (void)_completeWithResult:(unsigned long long)a0 didSetUp:(BOOL)a1;
- (void)_userDidTapCancelButton:(id)a0;
- (BOOL)canCompleteExtendedInitializationQuickly;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (id)prerequisiteFlowIdentifier;

@end
