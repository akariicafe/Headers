@class NSDecimalNumber, NSString, UIFont, UIColor, UILabel;

@interface PKSuperscriptedCurrencyAmountLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } lastLayedOutBoundsSize;
@property (nonatomic) double labelScaleFactor;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *superscriptFont;
@property (retain, nonatomic) UIColor *positiveValueTextColor;
@property (retain, nonatomic) UIColor *negativeValueTextColor;
@property (nonatomic) BOOL showsPositiveValueDesignation;
@property (nonatomic) BOOL showsNegativeValueDesignation;

- (void)_updateLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_attributedString;
- (void)_addSuperscriptToAttributedString:(id)a0 formattedCurrencyAmount:(id)a1 currencyAmountWithoutSymbols:(id)a2;
- (void)_addSuperscriptToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPrimaryFont:(id)a0 superscriptFont:(id)a1 positiveValueTextColor:(id)a2 negativeValueTextColor:(id)a3;
- (void)setAmount:(id)a0 currencyCode:(id)a1;

@end
