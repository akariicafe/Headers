@class NSString, AMSBiometricsSignatureResult;

@interface AMSPaymentSheetResult : NSObject

@property (retain, nonatomic) NSString *delegateAuthenticateToken;
@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) NSString *paymentToken;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;

- (void).cxx_destruct;

@end
