@class NSString, NSData, PKPaymentPass;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSData *verificationData;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
