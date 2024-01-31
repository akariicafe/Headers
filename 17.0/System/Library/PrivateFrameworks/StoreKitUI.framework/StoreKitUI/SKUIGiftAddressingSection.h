@class UITextView, SKUIGiftTextTableViewCell, NSString, SKUIGiftRecipientTableViewCell, SKUIGift;
@protocol UITextFieldDelegate;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {
    double _footerHeight;
    NSString *_footerString;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    double _textViewCellHeight;
}

@property (retain, nonatomic) SKUIGiftTextTableViewCell *messageCell;
@property (retain, nonatomic) SKUIGift *gift;
@property (nonatomic) id<UITextFieldDelegate> textFieldDelegate;
@property (readonly, nonatomic) UITextView *messagingTextView;

- (void).cxx_destruct;
- (id)_attributedPlaceholderWithString:(id)a0;
- (id)_footerString;
- (id)_recipientTableViewCell;
- (id)_textFieldTableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (void)beginEditingMessageForTableView:(id)a0 indexPath:(id)a1;
- (void)endEditingMessageForTableView:(id)a0 indexPath:(id)a1;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithGiftConfiguration:(id)a0;
- (long long)numberOfRowsInSection;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
