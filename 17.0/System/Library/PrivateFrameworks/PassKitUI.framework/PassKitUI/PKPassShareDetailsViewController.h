@class PKSharedPassSharesController, NSString, PKSharePreviewAdditionalSecuritySectionController, PKSharePreviewOverviewSectionController, PKPassSharesListSectionController, PKPassEntitlementsComposer, PKPassEntitlementSelectionSectionController, PKPassShare, UIBarButtonItem, PKShareAuthorizationSession;

@interface PKPassShareDetailsViewController : PKPaymentSetupOptionsViewController <PKPassSharesListSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate> {
    PKPassShare *_share;
    PKPassShare *_senderShare;
    PKSharedPassSharesController *_sharesController;
    PKShareAuthorizationSession *_authorizer;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKSharePreviewOverviewSectionController *_overviewSectionController;
    PKPassEntitlementSelectionSectionController *_entitlementSectionController;
    PKSharePreviewAdditionalSecuritySectionController *_additionalSecuritySectionController;
    PKPassSharesListSectionController *_sharesSectionController;
    UIBarButtonItem *_saveButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)avatarView;
- (void)_donePressed;
- (void)_saveTapped;
- (void)_setIsLoading:(BOOL)a0;
- (void)_setRecipient:(id)a0;
- (void)_setSender:(id)a0;
- (void)_showDisplayableError:(id)a0;
- (void)_updateShareToShare:(id)a0;
- (id)initWithShare:(id)a0 sharesController:(id)a1 authorizer:(id)a2;
- (void)passSharesListSectionController:(id)a0 didSelectShare:(id)a1;
- (void)passSharesListSectionController:(id)a0 presentAlert:(id)a1;
- (void)passSharesListSectionController:(id)a0 setIsLoading:(BOOL)a1;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)a0;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)a0;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)a0;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)a0;
- (void)showSaveButtonIfNecessary;

@end
