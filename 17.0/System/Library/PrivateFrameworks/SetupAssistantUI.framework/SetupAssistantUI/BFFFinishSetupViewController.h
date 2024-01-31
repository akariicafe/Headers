@class BYFlowSkipController, UIViewController, BYPaneFeatureAnalyticsManager, NSMutableSet, BFFFinishSetupModalNavigationController, NSMutableArray, FLFollowUpAction, BYAnalyticsManager;
@protocol BYCapabilities;

@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting> {
    BOOL _setupInProgress;
    BFFFinishSetupModalNavigationController *_navigationController;
    FLFollowUpAction *_followUpAction;
    NSMutableArray *_flowIdentifiers;
    NSMutableSet *_completedFlowIdentifiers;
    NSMutableSet *_skippedFlowIdentifiers;
    UIViewController *_newRootViewController;
    id /* block */ _completion;
    id /* block */ _overrideFlowControllerGenerator;
}

@property (retain, nonatomic) id<BYCapabilities> capabilities;
@property (retain, nonatomic) BYFlowSkipController *flowSkipController;
@property (retain, nonatomic) BYAnalyticsManager *analyticsManager;
@property (retain, nonatomic) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;

+ (id)_keyValueDictionaryForURL:(id)a0;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)a0;

- (id)init;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_complete;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)a0;
- (void)_didSatisfyInitializationForFlowController:(id)a0;
- (void)_didSatisfyPreconditionsForFlowController:(id)a0;
- (void)_ensureNavigationControllerWithViewController:(id)a0 pushCompletion:(id /* block */)a1;
- (id)_flowControllerForFlowIdentifier:(id)a0;
- (id)_flowControllerForNextFlowIdentifier;
- (void)_flowDidFinishForIdentifiers:(id)a0 result:(unsigned long long)a1;
- (void)_performExtendedInitializationForFlowController:(id)a0;
- (void)_pushViewControllerOntoNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)_startNextFlowIdentifier;
- (BOOL)didCompleteFlowInFinishSetup:(id)a0;
- (BOOL)didSkipFlowInFinishSetup:(id)a0;
- (void)processURL:(id)a0 completion:(id /* block */)a1;
- (void)setOverrideFlowControllerGenerator:(id /* block */)a0;

@end
