@class PKEnterCurrencyAmountPassView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView

@property (weak, nonatomic) id<PKEnterCurrencyAmountPassViewDelegate> delegate;
@property (readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_bottomPadding;
- (id)initWithCurrenyAmount:(id)a0 pass:(id)a1;

@end
