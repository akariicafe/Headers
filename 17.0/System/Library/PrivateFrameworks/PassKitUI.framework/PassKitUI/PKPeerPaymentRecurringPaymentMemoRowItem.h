@class NSString, PKPeerPaymentRecurringPaymentMemo;

@interface PKPeerPaymentRecurringPaymentMemoRowItem : PKPeerPaymentRecurringPaymentDetailRowItem

@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemo *memo;
@property (retain, nonatomic) NSString *suggestedText;
@property (readonly, nonatomic) BOOL hasIcon;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 isEditable:(BOOL)a1 titleColor:(id)a2;

@end
