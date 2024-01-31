@class FKApplePayReceiptRowViewModel, FKApplePayOrderRowViewModel, FKApplePayBarcodeRowViewModel;

@interface FKApplePayRowViewModelCollection : NSObject

@property (readonly, copy, nonatomic) FKApplePayOrderRowViewModel *orderRowViewModel;
@property (readonly, copy, nonatomic) FKApplePayBarcodeRowViewModel *barcodeRowViewModel;
@property (readonly, copy, nonatomic) FKApplePayReceiptRowViewModel *receiptRowViewModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrderRowViewModel:(id)a0 barcodeRowViewModel:(id)a1 receiptRowViewModel:(id)a2;

@end
