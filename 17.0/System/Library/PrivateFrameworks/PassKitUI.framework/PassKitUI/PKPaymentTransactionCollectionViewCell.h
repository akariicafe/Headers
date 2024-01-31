@class NSString, PKPaymentTransactionView, UIImageView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell <PKPaymentTransactionCellResponder> {
    UIImageView *_multiselectImageView;
    BOOL _isEditing;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentTransactionView *transactionView;
@property (nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)maxWidthForTransactionCellInWidth:(double)a0;

@end
