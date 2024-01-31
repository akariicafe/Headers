@class IDSBatchIDQueryController, NSString, NSArray, NSMutableSet, CNContactPickerViewController, CNAutocompleteResultsTableViewController, CNContactStore, CNAutocompleteSearchManager, CNComposeRecipientTextView, NSNumber, UIScrollView;

@interface PUPhotoStreamRecipientViewController : UIViewController <UIPopoverPresentationControllerDelegate, IDSBatchIDQueryControllerDelegate, CNContactPickerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer> {
    CNAutocompleteResultsTableViewController *_searchResultsTableViewController;
    CNComposeRecipientTextView *_recipientView;
    UIScrollView *_recipientContainerView;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    NSMutableSet *_validPhoneNumbers;
    CNContactPickerViewController *_contactPickerPresentedController;
    struct CGSize { double width; double height; } _recipientViewSize;
    double _lastHeight;
}

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSArray *recipients;
@property (nonatomic) double bottomTableOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordRecentInvitationRecipient:(id)a0 displayName:(id)a1 date:(id)a2;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)viewDidLoad;
- (void)prepareForPopoverPresentation:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)autocompleteResultsController:(id)a0 tintColorForRecipient:(id)a1 completion:(id /* block */)a2;
- (id)_searchManager;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 disambiguateRecipientForAtom:(id)a1;
- (void)composeRecipientView:(id)a0 showPersonCardForAtom:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)_setSearchResults:(id)a0;
- (void)makeRecipientViewFirstResponder;
- (void)_addRecipientForContact:(id)a0 address:(id)a1 kind:(unsigned long long)a2;
- (void)_dismissContactPicker;
- (void)_searchForRecipientWithText:(id)a0;
- (id)_selectedNormalizedPhoneForRecipient:(id)a0;
- (void)makeRecipientViewResignFirstResponder;

@end
