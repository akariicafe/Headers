@class NSString, NSSet, NSMutableDictionary, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, NSNumber, NSLayoutConstraint;
@protocol SFSharedAccountsGroupMemberPickerViewControllerDelegate;

@interface SFSharedAccountsGroupMemberPickerViewController : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer> {
    CNAutocompleteResultsTableViewController *_contactsResultsTableViewController;
    CNComposeRecipientTextView *_recipientTextView;
    CNAutocompleteSearchManager *_contactsSearchManager;
    NSNumber *_currentSearchTaskID;
    NSMutableDictionary *_addressToEligibility;
    NSMutableDictionary *_recipientGroupToEligibility;
    NSSet *_alreadyAddedAddresses;
    NSLayoutConstraint *_recipientTextViewHeightConstraint;
}

@property (nonatomic) BOOL shouldConfirmAddingRecipients;
@property (weak, nonatomic) id<SFSharedAccountsGroupMemberPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)_cancelButtonPressed;
- (void)autocompleteResultsController:(id)a0 tintColorForRecipient:(id)a1 completion:(id /* block */)a2;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)_addRecipient:(id)a0;
- (void)_addMembersButtonPressed;
- (BOOL)_doesGroupOnlyContainKnownContacts:(id)a0;
- (void)_fetchEligibilityForRecipients:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleSelectionForMultipleRecipientsInGroup:(id)a0;
- (void)_handleSelectionForSingleRecipient:(id)a0;
- (BOOL)_hasEligibilityCachedForAllRecipients:(id)a0;
- (BOOL)_isAddressAlreadyPartOfGroupOrInvitedAddresses:(id)a0;
- (BOOL)_isEveryMemberInContactsGroupAlreadyInSharingGroup:(id)a0;
- (id)_recipientsWithEligibleAddressesAsDefaultAddressesIfPossible:(id)a0;
- (void)_resetSearchQuery;
- (void)_updateRecipientTextViewHeight;
- (id)initWithAlreadyAddedAddresses:(id)a0;

@end
