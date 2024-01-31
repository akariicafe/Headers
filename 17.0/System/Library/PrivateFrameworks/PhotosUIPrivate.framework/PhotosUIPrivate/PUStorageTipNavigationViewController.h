@class PSRootController, NSString, PSSpecifier, PUStorageTipListViewController, UIViewController;
@protocol PSController, RecommendationFlowControllerDelegate;

@interface PUStorageTipNavigationViewController : UINavigationController <PSController, RecommendationFlowController> {
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (readonly, nonatomic) PUStorageTipListViewController *listViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RecommendationFlowControllerDelegate> cloudRecommendationsDelegate;

- (id)init;
- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)parentController;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
