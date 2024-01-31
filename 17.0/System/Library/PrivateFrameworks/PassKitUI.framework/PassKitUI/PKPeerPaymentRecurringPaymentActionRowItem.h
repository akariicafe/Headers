@class NSString;

@interface PKPeerPaymentRecurringPaymentActionRowItem : PKPeerPaymentRecurringPaymentDetailRowItem

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long action;
@property (nonatomic) BOOL actionInProgress;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
