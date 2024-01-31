@class NSDecimalNumber;

@interface PKAccountWebServiceTransferEligibilityResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) unsigned long long eligibility;
@property (readonly, copy, nonatomic) NSDecimalNumber *overflowAmount;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 account:(id)a1 request:(id)a2;

@end
