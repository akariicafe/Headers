@class PXComposeRecipientSelectionManager, NSString, PXComposeRecipientTableViewModel, PXComposeRecipientValidationManager, PXPhotoRecipientViewController, NSIndexPath, UITableViewHeaderFooterView;
@protocol PXComposeRecipientTableViewControllerDelegate, PXPersonSuggestion;

@interface PXComposeRecipientTableViewController : UITableViewController <PXComposeRecipientDataSourceManagerDelegate, PXComposeRecipientSelectionManagerDelegate, PXComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate, PXPhotoRecipientViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, PXChangeObserver> {
    PXPhotoRecipientViewController *_bootstrapRecipientViewController;
    id<PXPersonSuggestion> _personSuggestionForBootstrapping;
    NSIndexPath *_indexPathForBootstrapping;
    PXPhotoRecipientViewController *_addPeopleRecipientViewController;
    UITableViewHeaderFooterView *_footerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXComposeRecipientTableViewModel *viewModel;
@property (retain, nonatomic) PXComposeRecipientSelectionManager *selectionManager;
@property (retain, nonatomic) PXComposeRecipientValidationManager *validationManager;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double tableViewHeight;
@property (weak, nonatomic) id<PXComposeRecipientTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactViewControllerToPresentForRecipientViewController:(id)a0;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_footerView;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)configureWithViewModel:(id)a0;
- (BOOL)_updateHeaderHeight;
- (void)_contactViewController:(id)a0 didSelectContact:(id)a1;
- (void)_dismissRecipientViewController:(id)a0;
- (void)_handleAddRecipient:(id)a0;
- (id)_tableView:(id)a0 participantCellForRowAtIndexPath:(id)a1;
- (BOOL)_updateFooterHeight;
- (BOOL)_updateRowHeight;
- (void)bootstrapPersonSuggestion:(id)a0 withContact:(id)a1;
- (id)cellModelAtIndex:(unsigned long long)a0;
- (void)composeRecipientDataSourceManager:(id)a0 didUpdateDataSourceWithChangeDetails:(id)a1;
- (void)composeRecipientSelectionManager:(id)a0 didUpdateSelectionSnapshotWithChangeDetails:(id)a1;
- (void)composeRecipientValidationManager:(id)a0 didUpdateValidationWithChangedIndexes:(id)a1;
- (void)configureCellModel:(id)a0 withComposeRecipient:(id)a1;
- (BOOL)isValidAddressForComposeRecipient:(id)a0;
- (void)photoRecipientViewController:(id)a0 didCompleteWithRecipients:(id)a1;
- (void)photoRecipientViewControllerDidCancel:(id)a0;
- (void)updateTableViewHeight;

@end
