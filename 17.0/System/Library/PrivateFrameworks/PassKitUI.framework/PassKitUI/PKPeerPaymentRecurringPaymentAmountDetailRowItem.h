@class NSString, NSDecimalNumber;

@interface PKPeerPaymentRecurringPaymentAmountDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSDecimalNumber *amount;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
