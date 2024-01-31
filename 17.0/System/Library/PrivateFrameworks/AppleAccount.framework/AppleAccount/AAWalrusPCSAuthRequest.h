@class NSDictionary, ACAccount, NSString;

@interface AAWalrusPCSAuthRequest : AARequest {
    NSDictionary *_bodyParams;
    ACAccount *_account;
    NSString *_internalURLString;
}

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 WebSessionID:(id)a1 webSessionConsentUUID:(id)a2 encryptionEnvelope:(id)a3 appName:(id)a4 responseIdentities:(id)a5 serverInfo:(id)a6 urlString:(id)a7;

@end
