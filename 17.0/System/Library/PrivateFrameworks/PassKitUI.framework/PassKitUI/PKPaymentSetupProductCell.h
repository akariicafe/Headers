@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic) double textLabelOffset;
@property (nonatomic) BOOL drawsTopSeperator;

+ (id)reuseIdentifier;

- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateDisplay;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;

@end
