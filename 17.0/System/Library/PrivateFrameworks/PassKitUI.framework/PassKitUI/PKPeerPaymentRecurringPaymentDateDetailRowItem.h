@class NSString, NSDate;

@interface PKPeerPaymentRecurringPaymentDateDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL isSelected;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
