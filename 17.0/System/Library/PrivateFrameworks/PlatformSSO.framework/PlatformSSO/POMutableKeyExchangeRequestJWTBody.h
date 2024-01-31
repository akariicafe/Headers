@class NSString, NSDictionary, NSDate;

@interface POMutableKeyExchangeRequestJWTBody : POKeyExchangeRequestJWTBody <POMutableJWTBody>

@property (retain) NSString *request_type;
@property (retain) NSString *version;
@property (retain) NSString *aud;
@property (retain) NSString *iss;
@property (retain) NSString *sub;
@property (retain) NSDate *iat;
@property (retain) NSDate *exp;
@property (retain) NSString *nonce;
@property (retain) NSString *request_nonce;
@property (retain) NSString *refresh_token;
@property (retain) NSString *other_publickey;
@property (retain) NSString *key_context;
@property (retain) NSString *username;
@property (retain) NSString *key_purpose;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSub:(id)a0;
- (void)setVersion:(id)a0;
- (void)setUsername:(id)a0;
- (void)setNonce:(id)a0;
- (void)setExp:(id)a0;
- (void)setAud:(id)a0;
- (void)setIat:(id)a0;
- (void)setKey_context:(id)a0;
- (void)setIss:(id)a0;
- (void)setKey_purpose:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setOther_publickey:(id)a0;
- (void)setRefresh_token:(id)a0;
- (void)setRequest_nonce:(id)a0;
- (void)setRequest_type:(id)a0;

@end
