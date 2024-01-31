@class PKAccountSupportTopicsSectionController, NSString, PKAccountSupportSectionController, PKBusinessChatController, PKAccountSupportTopic, PKAccount;

@interface PKAccountSupportTopicsViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate> {
    PKAccount *_account;
    PKAccountSupportTopicsSectionController *_sectionTopicController;
    PKAccountSupportSectionController *_sectionAccountController;
    PKBusinessChatController *_businessChatController;
    BOOL _loadingTopics;
}

@property (retain, nonatomic) PKAccountSupportTopic *suggestedTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (void)_continueToChat;
- (void)_cancelTapped;
- (void)_fetchCommonSupportTopics;
- (void)_reloadSectionControllerWithTopics:(id)a0;
- (void)deselectCells;
- (void)openBusinessChatForTopic:(id)a0;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSupportLink:(id)a0;
- (void)showExplanationForTopic:(id)a0;

@end
