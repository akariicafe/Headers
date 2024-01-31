@class NSString, NSDictionary, NSMutableData, NSDate;

@interface POMutableAssertionJWTBody : POAssertionJWTBody <POMutableJWTBody>

@property (retain) NSString *aud;
@property (retain) NSString *iss;
@property (retain) NSString *sub;
@property (retain) NSDate *iat;
@property (retain) NSDate *exp;
@property (retain) NSString *use;
@property (retain) NSString *nonce;
@property (retain) NSString *request_nonce;
@property (retain) NSString *scope;
@property (retain) NSMutableData *password;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPassword:(id)a0;
- (void)setScope:(id)a0;
- (void)setSub:(id)a0;
- (void)setNonce:(id)a0;
- (void)setExp:(id)a0;
- (void)setAud:(id)a0;
- (void)setIat:(id)a0;
- (void)setIss:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setRequest_nonce:(id)a0;

@end
