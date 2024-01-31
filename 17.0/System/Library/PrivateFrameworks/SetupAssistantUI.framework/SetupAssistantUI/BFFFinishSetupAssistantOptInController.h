@class BYFlowSkipController, BYPaneFeatureAnalyticsManager, NSString, VTUIEnrollTrainingViewController;

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling> {
    BFFFinishSetupAssistantOptInController *_selfReference;
    VTUIEnrollTrainingViewController *_enrollmentController;
    BOOL _willOfferVoiceTrigger;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BYFlowSkipController *flowSkipController;
@property (retain, nonatomic) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishSetupAssistantOptInController;

- (id)init;
- (void).cxx_destruct;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (void)continueSetup;
- (void)showLearnMore;
- (void)skipSetup;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;

@end
