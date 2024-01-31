@class NSString, PKPeerPaymentRecurringPaymentMemoRowItem, UITextField, UILabel, UIButton;
@protocol PKPeerPaymentRecurringPaymentMemoCellDelegate;

@interface PKPeerPaymentRecurringPaymentMemoCell : UICollectionViewListCell <UITextFieldDelegate> {
    UILabel *_emojiLabel;
    UIButton *_iconButton;
    UITextField *_textField;
}

@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemoRowItem *item;
@property (weak, nonatomic) id<PKPeerPaymentRecurringPaymentMemoCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
