@class NSDate;

@interface PKPeerPaymentRecurringPaymentDateSelectorDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *minimumDate;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
