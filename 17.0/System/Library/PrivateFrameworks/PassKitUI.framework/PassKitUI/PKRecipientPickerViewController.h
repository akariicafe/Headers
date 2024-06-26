@class PKPeerPaymentController, UICollectionView, PKDashboardTransactionFetcher, CNAutocompleteResultsTableViewController, PKFamilyMemberCollection, UIView, NSString, PKContactFormatValidator, CNAutocompleteSearchManager, PKDashboardTitleHeaderView, PKThumbnailCollectionViewCell, NSArray, PKContactResolver, CNComposeRecipientTextView, PKTransactionSourceCollection, NSNumber;

@interface PKRecipientPickerViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNAutocompleteResultsTableViewControllerDelegate, PKDashboardTransactionFetcherDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, CNAvatarViewDelegate> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    long long _peerPaymentSendFlowType;
    NSString *_title;
    NSNumber *_currentTaskID;
    NSArray *_autocompleteResults;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _keyboardVisible;
    BOOL _performingAction;
    UIView *_containerView;
    CNComposeRecipientTextView *_recipientTextView;
    CNAutocompleteResultsTableViewController *_resultsViewController;
    CNAutocompleteSearchManager *_searchManager;
    PKContactFormatValidator *_contactFormatValidator;
    NSString *_currentRecipientText;
    PKContactResolver *_contactResolver;
    PKDashboardTransactionFetcher *_transactionFetcher;
    UICollectionView *_suggestionsView;
    NSArray *_suggestedRecipients;
    NSArray *_suggestedFamilyRecipients;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKThumbnailCollectionViewCell *_sampleThumbnailCell;
    PKPeerPaymentController *_peerPaymentController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)_keyboardWillShow:(id)a0;
- (void)loadView;
- (void)_cancelButtonTapped:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)setPerformingAction:(BOOL)a0;
- (void)autocompleteResultsController:(id)a0 tintColorForRecipient:(id)a1 completion:(id /* block */)a2;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didReplaceRecipients:(id)a1 withRecipients:(id)a2;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)a0;
- (BOOL)getSupplementalGroupsForSearchQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)transactionsChanged:(id)a0;
- (void)_configureHeaderView:(id)a0 inSection:(unsigned long long)a1;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_addRecipient:(id)a0;
- (void)_addRecipientFromContactProperty:(id)a0;
- (void)_clearRecipientTextView;
- (unsigned long long)_composeAddressKindFromCounterpartHandle:(id)a0;
- (id)_composeRecipientForContact:(id)a0;
- (void)_configureCell:(id)a0 withContact:(id)a1;
- (void)_generateSuggestions;
- (BOOL)_hasHeaderForSection:(unsigned long long)a0;
- (BOOL)_isRecipientTextViewEmpty;
- (void)_keyboardWillChange:(id)a0;
- (void)_nextBarButtonPressed:(id)a0;
- (void)_removeAllRecipients;
- (BOOL)_showFamilySuggestions;
- (void)_showNextScreenWithRecipient:(id)a0;
- (BOOL)_showRecentSuggestions;
- (void)_updateNextBarButtonItem;
- (void)consumeResults:(id)a0 taskID:(id)a1;
- (id)initWithTransactionSourceCollection:(id)a0 familyCollection:(id)a1 peerPaymentSendFlowType:(long long)a2;
- (id)initWithTransactionSourceCollection:(id)a0 peerPaymentSendFlowType:(long long)a1;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (void)setUpNavigationBar;

@end
