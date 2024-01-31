@class CNContactPickerViewController, NSString, NSArray, PXSearchRecipientController, NSSet, PXComposeRecipientView, PXRecipientSearchDataSourceManager, NSLayoutConstraint, UILabel, UIBarButtonItem;
@protocol PXPhotoRecipientViewControllerDelegate;

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate> {
    NSLayoutConstraint *_recipientViewHeightConstraint;
    NSLayoutConstraint *_resultsViewBottomConstraint;
    UIBarButtonItem *_addButton;
}

@property (retain, nonatomic) NSString *initialLocalizedNameToQuery;
@property (retain, nonatomic) PXSearchRecipientController *searchRecipientController;
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (retain, nonatomic) PXComposeRecipientView *composeRecipientView;
@property (retain, nonatomic) UILabel *noContentLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id<PXPhotoRecipientViewControllerDelegate> delegate;
@property (retain, nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSSet *usedAddresses;
@property (nonatomic) long long maxRecipients;
@property (nonatomic) BOOL contactPickerPresentedExternally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactViewControllerToPresentForRecipientViewController:(id)a0;
+ (id)recipientPickerViewControllerWithUsedAddresses:(id)a0 maxRecipients:(long long)a1 delegate:(id)a2;

- (void)updateViewConstraints;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_keyboardDidShow:(id)a0;
- (void)viewDidLoad;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)_updateNoContentLabelVisibility;
- (void)_commonInitializationWithVerificationType:(long long)a0;
- (void)_contactPicker:(id)a0 didSelectComposeRecipient:(id)a1;
- (void)_dismissContactPickerViewController;
- (void)_handleAddButton:(id)a0;
- (void)_handleCancelButton:(id)a0;
- (void)_presentContactPickerViewController:(id)a0;
- (void)_updateAddButton;
- (void)_updateNoContentLabelFont;
- (void)composeRecipientView:(id)a0 disambiguateRecipient:(id)a1;
- (id)initWithInitialLocalizedNameToQuery:(id)a0;
- (id)initWithSearchResultVerificationType:(long long)a0;
- (void)searchRecipientController:(id)a0 didSelectRecipient:(id)a1;
- (void)searchRecipientController:(id)a0 numberOfSearchRecipientsDidChange:(unsigned long long)a1;
- (void)searchRecipientController:(id)a0 searchStateDidChange:(long long)a1;
- (id)viewControllerForPresentingContactViewControllerBySearchRecipientController:(id)a0;

@end
