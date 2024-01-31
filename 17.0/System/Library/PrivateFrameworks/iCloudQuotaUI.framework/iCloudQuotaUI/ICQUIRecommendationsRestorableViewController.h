@class ICQUIRemoteUIPresenter, PSRootController, NSString, ICQPreferencesRemoteUIDelegate, ICQUpgradeFlowManager, PSSpecifier, RecommendationsController, CERecommendation, UIViewController, AIDAAccountManager, iCloudMailAccountProvider, ICQLiftUIPresenter;

@interface ICQUIRecommendationsRestorableViewController : UIViewController <PSStateRestoration, PSController, RecommendationFlowControllerDelegate, ICQLiftUIPresenterDelegate, DelayedPushDelegate, ICQUpgradeFlowManagerDelegate, ICQUIRemoteUIPresenterDelegate> {
    iCloudMailAccountProvider *mailAccountProvider;
    ICQLiftUIPresenter *_liftUIPresenter;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ICQUIRemoteUIPresenter *_remoteUIPresenter;
    CERecommendation *_activeRecommendation;
}

@property (retain, nonatomic) PSRootController *rootController;
@property (retain, nonatomic) UIViewController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) RecommendationsController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)account;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)userDidCompleteAction:(id)a0;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)openVCForRecommendation:(id)a0 action:(id)a1;
- (void)_launchUpgradeFlowForRecommendation:(id)a0 url:(id)a1 action:(long long)a2;
- (void)beginFamilySharingFlowWithRecommendation:(id)a0 familyCircle:(id)a1;
- (void)cancelledRecommendation:(id)a0;
- (void)completedRecommendation:(id)a0 storageRecovered:(id)a1;
- (void)enableDataclass:(id)a0 forRecommendation:(id)a1;
- (void)enableMessagesDataclassForRecommendation:(id)a0;
- (void)enablePrivateRelayForRecommendation:(id)a0;
- (void)handlePostFamilySharingFlowChecks:(id)a0 familyCircle:(id)a1;
- (void)handleTurnOnMoreServicesWithRecommendation:(id)a0 url:(id)a1;
- (void)launchUpgradeFlowForRecommendationWithLiftUI:(id)a0 url:(id)a1;
- (void)launchUpgradeFlowForRecommendationWithRemoteUI:(id)a0 url:(id)a1;
- (void)liftUIPresenter:(id)a0 didLoadWithSuccess:(BOOL)a1 error:(id)a2;
- (void)liftUIPresenterDidCancel:(id)a0;
- (void)liftUIPresenterDidCancel:(id)a0 userInfo:(id)a1;
- (void)liftUIPresenterDidComplete:(id)a0;
- (void)liftUIPresenterDidComplete:(id)a0 userInfo:(id)a1;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadStarted:(id)a0;
- (void)openExternalLinkForRecommendation:(id)a0 deeplink:(id)a1;
- (void)openLiftUIForRecommendation:(id)a0 url:(id)a1;
- (void)openRemoteUIForRecommendation:(id)a0 url:(id)a1;
- (void)postQuotaDidChangeNotification;
- (void)remoteUIFlowManager:(id)a0 didCompleteFlowWithSuccess:(BOOL)a1 error:(id)a2;
- (void)remoteUIFlowManager:(id)a0 didDismissWithError:(id)a1;
- (void)setupiCloudEmailForRecommendation:(id)a0;
- (void)userDidCancelAction;

@end
