@class PKPaymentDeviceMetadata, NSString, NSArray, NSData, PKDSPContext, NSNumber, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    BOOL _devSigned;
    PKPaymentDeviceMetadata *_deviceData;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly, nonatomic, getter=isDeviceProvisioningDataExpected) BOOL deviceProvisioningDataExpected;
@property (nonatomic) BOOL disableDeviceScore;
@property (nonatomic) BOOL sendReducedDeviceData;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) PKDSPContext *context;
@property (copy, nonatomic) NSData *cryptogram;
@property (copy, nonatomic) NSData *challengeResponse;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) BOOL includeExternalDestinationDevices;
@property (copy, nonatomic) NSArray *externalDestinationDevices;
@property (copy, nonatomic) NSString *transferFromDevice;
@property (nonatomic) BOOL removeFromSourceDevice;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSData *fidoAttestation;
@property (copy, nonatomic) NSData *fidoKey;
@property (copy, nonatomic) NSData *fidoSignedChallenge;
@property (copy, nonatomic) NSData *seBlobDeviceEncryptionCertificate;
@property (copy, nonatomic) NSArray *transactionKeyCertificateChain;
@property (copy, nonatomic) NSData *longTermPrivacyKey;
@property (copy, nonatomic) NSData *transactionKey;
@property (copy, nonatomic) NSArray *isoDeviceEncryptionAttestation;
@property (copy, nonatomic) NSData *isoDeviceEncryptionAuthorization;
@property (copy, nonatomic) NSString *subCredentialIdentifier;
@property (copy, nonatomic) NSArray *authorizationKeyAttestation;
@property (copy, nonatomic) NSData *transactionKeyAttestation;
@property (copy, nonatomic) NSData *transactionKeySignature;
@property (copy, nonatomic) NSData *transactionKeyAuthorization;
@property (copy, nonatomic) NSData *progenitorKeyCASDAttestation;
@property (copy, nonatomic) NSArray *transactionKeys;
@property (copy, nonatomic) NSData *serverAttestedProvisioningData;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEligibilityResponse:(id)a0 addRequestConfiguration:(id)a1 addRequest:(id)a2;
- (void)_deviceScoreWithCompletion:(id /* block */)a0;
- (void)_encryptSecureDictionary:(id)a0 intoDictionary:(id)a1;
- (void)_requestBodyWithWebService:(id)a0 completion:(id /* block */)a1;
- (id)_secureParemters;
- (void)_updateContextUsingWebService:(id)a0 completion:(id /* block */)a1;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 certChain:(id)a3 devSigned:(BOOL)a4 deviceData:(id)a5 webService:(id)a6 completion:(id /* block */)a7;
- (id)initWithEligibilityResponse:(id)a0;
- (id)initWithEligibilityResponse:(id)a0 style:(long long)a1;

@end
