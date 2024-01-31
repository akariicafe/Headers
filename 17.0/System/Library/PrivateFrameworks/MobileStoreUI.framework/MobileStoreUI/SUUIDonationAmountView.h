@class UIView, NSArray, SUUIGiftAmount, UIImage, UIImageView, SUUIGiftCharity, UILabel, UIScrollView;

@interface SUUIDonationAmountView : UIView {
    NSArray *_amountButtons;
    UILabel *_amountDisclaimerLabel;
    UILabel *_descriptionLabel;
    UILabel *_legalTextLabel;
    UILabel *_legalText2Label;
    UIImageView *_logoImageView;
    long long _selectedAmountIndex;
    UIView *_separatorView;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) SUUIGiftCharity *charity;
@property (retain, nonatomic) UIImage *logoImage;
@property (readonly, nonatomic) SUUIGiftAmount *selectedAmount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_amountButtonDown:(id)a0;
- (void)_amountButtonUpInside:(id)a0;
- (void)_amountButtonUpOutside:(id)a0;
- (id)initWithCharity:(id)a0;

@end
