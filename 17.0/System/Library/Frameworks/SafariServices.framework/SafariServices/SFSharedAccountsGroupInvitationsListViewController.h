@class SFTableViewDiffableDataSource, NSString, UINavigationController, KCSharingGroup;
@protocol SFSharedAccountsGroupInvitationsListViewControllerDelegate;

@interface SFSharedAccountsGroupInvitationsListViewController : UITableViewController <PSStateRestoration, SFSharedAccountsGroupInvitationViewControllerDelegate, WBSOngoingSharingGroupProviderSubscriber, SFAccountManagerPlatterWithDeclineButtonCellDelegate> {
    SFTableViewDiffableDataSource *_diffableDataSource;
    UINavigationController *_acceptInvitationResponseNavigationController;
    KCSharingGroup *_groupToPresentInvitationForOnAppearance;
    NSString *_groupIDForInvitationBeingProcessed;
}

@property (weak, nonatomic) id<SFSharedAccountsGroupInvitationsListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)_cellForItemIdentifier:(id)a0;
- (void)_declineInvitationForGroup:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_isRespondingToLastInvitation:(id)a0;
- (void)_presentAcceptInvitationResponseViewForGroup:(id)a0;
- (void)_presentDeclineGroupInvitationAlertForTableViewCell:(id)a0;
- (void)_presentErrorAlertWithString:(id)a0;
- (void)_reloadDiffableDataSource;
- (void)groupProviderReceivedUpdates:(id)a0;
- (id)initWithGroupToPresentInvitationForOnAppearance:(id)a0;
- (void)invitationViewController:(id)a0 acceptedInvitationForGroup:(id)a1;
- (void)invitationViewController:(id)a0 declinedInvitationForGroup:(id)a1;
- (void)invitationViewController:(id)a0 failedToAcceptInvitationWithError:(id)a1;
- (void)invitationViewController:(id)a0 failedToDeclineInvitationWithError:(id)a1;
- (void)invitationViewControllerChoseNotToRespondToInvitation:(id)a0;
- (void)userDidPressDeclineButtonForPlatterTableViewCell:(id)a0;

@end
