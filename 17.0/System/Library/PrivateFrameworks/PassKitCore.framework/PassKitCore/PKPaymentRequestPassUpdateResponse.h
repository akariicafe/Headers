@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *passURL;
@property (readonly, nonatomic) unsigned long long appletState;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
