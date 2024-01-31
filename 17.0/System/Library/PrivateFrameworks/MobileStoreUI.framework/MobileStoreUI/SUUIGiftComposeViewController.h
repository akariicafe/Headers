@class NSIndexPath, UIBarButtonItem, SUUIGiftSendDateSection, SUUIGiftValidationResponse, UITableView, SUUIGiftAmountSection, NSObject, SUUIGiftTermsAndConditionsSection, NSMutableArray, SUUIGiftItemView, UIView, SUUIGiftValidator, NSString, UIPopoverController, SUUIGiftAddressingSection, UIImage;
@protocol OS_dispatch_source;

@interface SUUIGiftComposeViewController : SUUIGiftStepViewController <SUUIGiftSendDateSectionDelegate, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    SUUIGiftAddressingSection *_addressingSection;
    SUUIGiftAmountSection *_amountSection;
    UIImage *_itemImage;
    SUUIGiftItemView *_itemView;
    SUUIGiftValidationResponse *_lastValidationResponse;
    UIView *_searchResultsView;
    NSMutableArray *_sections;
    SUUIGiftSendDateSection *_sendDateSection;
    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView *_tableView;
    BOOL _tappedNextWhileValidating;
    SUUIGiftTermsAndConditionsSection *_termsSection;
    NSObject<OS_dispatch_source> *_validationTimer;
    SUUIGiftValidator *_validator;
    UIPopoverController *_peoplePickerPopover;
    UIPopoverController *_searchResultsPopover;
}

@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)_reloadSections;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_headerView;
- (id)_itemView;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (BOOL)popoverControllerShouldDismissPopover:(id)a0;
- (void)_cancelAction:(id)a0;
- (void)_nextAction:(id)a0;
- (void)_amountControlAction:(id)a0;
- (void)_finishValidationWithResponse:(id)a0 error:(id)a1;
- (id)_itemImage;
- (void)_keyboardChangeNotification:(id)a0;
- (void)_pushThemePickerOrShowInvalidAlert;
- (void)_recipientsDidChangeNotification:(id)a0;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (void)_textFieldChangeNotification:(id)a0;
- (void)_textViewChangeNotification:(id)a0;
- (void)_textViewDidEndEditingNotification:(id)a0;
- (void)_validateGift;
- (void)_validateGiftThrottled:(BOOL)a0;
- (void)giftSendDateSection:(id)a0 didChangeDate:(id)a1;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 didUpdateSearchController:(id)a2;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 dismissContactPicker:(id)a2;
- (void)tableView:(id)a0 giftRecipientCell:(id)a1 presentContactPicker:(id)a2;
- (void)tableView:(id)a0 giftRecipientCellDidChangeRecipients:(id)a1;
- (void)tableView:(id)a0 giftRecipientCellDidChangeSize:(id)a1;

@end
