@class NSString, NSURL;

@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *termsIdentifier;
@property (readonly, copy, nonatomic) NSURL *termsURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasTermsData;

@end
