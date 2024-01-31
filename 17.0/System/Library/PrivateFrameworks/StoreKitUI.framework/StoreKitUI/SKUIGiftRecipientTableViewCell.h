@class CNContactPickerViewController, NSString, NSArray, NSAttributedString, UIView, CNContactStore, SKUIGiftContactSearchController, CNComposeRecipientTextView, UILabel;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, CNComposeRecipientTextViewDelegate, SKUIGiftContactSearchDelegate> {
    CNContactStore *_contactStore;
    CNContactPickerViewController *_contactPickerController;
    UILabel *_placeholderLabel;
    CNComposeRecipientTextView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
}

@property (nonatomic) BOOL didLayoutSubviews;
@property (nonatomic) BOOL leftToRight;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_contactStore;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)recipientViewDidResignFirstResponder:(id)a0;
- (void)_resetSearchController;
- (void)_sendDidChangeRecipients;
- (void)_sendDidUpdateSearchController;
- (void)_sendDismissContactPicker;
- (void)presentPeoplePickerPopover:(id)a0 animated:(BOOL)a1;
- (void)presentSearchResultsPopover:(id)a0 animated:(BOOL)a1;
- (void)searchController:(id)a0 didSelectRecipient:(id)a1;
- (void)searchControllerDidFinishSearch:(id)a0;

@end
