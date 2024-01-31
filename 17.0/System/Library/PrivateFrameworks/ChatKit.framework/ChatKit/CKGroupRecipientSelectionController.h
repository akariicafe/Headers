@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate>

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_frecencySearch;
- (id)handlesForScreenTimePolicyCheck;
- (void)_checkAvailabilityAndAddToken;
- (BOOL)_enableRecipientsAdditionBasedOnAvailability;
- (void)_updateNavigationButton;
- (BOOL)alwaysShowSearchResultsTable;
- (void)composeRecipientViewReturnPressed:(id)a0;
- (BOOL)homogenizePreferredServiceForiMessage;
- (id)initWithConversation:(id)a0;
- (BOOL)isBeingPresentedInMacDetailsView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsForRecipientSelectionController:(id)a0;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)a0 didFinishAvailaiblityLookupForRecipient:(id)a1;
- (void)recipientSelectionController:(id)a0 textDidChange:(id)a1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)a0;
- (void)recipientSelectionControllerDidChange;
- (void)recipientSelectionControllerDidChangeSize:(id)a0;
- (void)recipientSelectionControllerDidPushABViewController:(id)a0;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)a0;
- (void)recipientSelectionControllerReturnPressed:(id)a0;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)a0;
- (void)recipientSelectionControllerShouldResignFirstResponder:(id)a0;
- (void)recipientSelectionControllerTabPressed:(id)a0;
- (BOOL)recipientSelectionIsGroup:(id)a0;
- (BOOL)shouldSuppressSearchResultsTable;
- (double)topInsetForNavBar;
- (void)viewDidAppearDeferredSetup;

@end
