@class PKContinuousButton, CNContact, UIImageView, NSString, UILabel, PKPaymentTransaction;
@protocol PKTransactionDetailQuestionCellDelegate;

@interface PKTransactionDetailQuestionCell : UITableViewCell {
    UILabel *_title;
    UILabel *_message;
    PKContinuousButton *_leadingButton;
    PKContinuousButton *_trailingButton;
    UIImageView *_imageView;
    BOOL _isTemplateLayout;
    PKPaymentTransaction *_transaction;
    CNContact *_accountUserContact;
    NSString *_submittingAnswer;
    BOOL _smallDevice;
}

@property (weak, nonatomic) id<PKTransactionDetailQuestionCellDelegate> questionDelegate;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_enableButtons:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_leadingButtonTapped:(id)a0;
- (void)_trailingButtonTapped:(id)a0;
- (void)setTransaction:(id)a0 accountUserContact:(id)a1 submittingAnswer:(id)a2;

@end
