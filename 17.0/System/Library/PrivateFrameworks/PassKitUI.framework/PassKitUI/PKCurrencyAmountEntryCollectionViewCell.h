@class UIColor, NSString, NSDecimalNumber, UITextField, UILabel, NSNumberFormatter;
@protocol PKCurrencyAmountEntryCollectionViewCellDelegate;

@interface PKCurrencyAmountEntryCollectionViewCell : UICollectionViewListCell <UITextFieldDelegate> {
    UILabel *_titleLabel;
    UITextField *_amountTextField;
    NSNumberFormatter *_currencyFormatter;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) BOOL isEditable;
@property (weak, nonatomic) id<PKCurrencyAmountEntryCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_amountTextFieldValueChanged:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
