@class PKPeerPaymentRecurringPayment;

@interface PKPeerPaymentRecurringPaymentActionResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentRecurringPayment *recurringPayment;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 productTimeZone:(id)a1;

@end
