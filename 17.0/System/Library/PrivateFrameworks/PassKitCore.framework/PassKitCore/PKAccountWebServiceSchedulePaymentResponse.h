@class NSArray;

@interface PKAccountWebServiceSchedulePaymentResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *payments;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 account:(id)a1 request:(id)a2;

@end
