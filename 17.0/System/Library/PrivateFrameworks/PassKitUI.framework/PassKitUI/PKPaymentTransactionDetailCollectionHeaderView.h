@class PKPaymentTransactionDetailHeaderView;

@interface PKPaymentTransactionDetailCollectionHeaderView : UICollectionViewListCell {
    PKPaymentTransactionDetailHeaderView *_headerView;
}

@property (readonly, nonatomic) PKPaymentTransactionDetailHeaderView *headerView;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
