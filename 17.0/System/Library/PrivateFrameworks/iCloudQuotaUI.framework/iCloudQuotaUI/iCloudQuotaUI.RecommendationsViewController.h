@interface iCloudQuotaUI.RecommendationsViewController : ICQUIRecommendationsRestorableViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ mailAccountProvider;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancelledRecommendation:(id)a0;
- (void)completedRecommendation:(id)a0 storageRecovered:(id)a1;
- (void)enableMessagesDataclassForRecommendation:(id)a0;
- (void)enablePrivateRelayForRecommendation:(id)a0;
- (void)handlePostFamilySharingFlowChecks:(id)a0 familyCircle:(id)a1;
- (void)setupiCloudEmailForRecommendation:(id)a0;

@end
