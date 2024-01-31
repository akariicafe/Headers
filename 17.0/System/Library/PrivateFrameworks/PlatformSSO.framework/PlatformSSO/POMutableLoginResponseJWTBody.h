@class NSString, NSDictionary, NSDate, NSNumber;

@interface POMutableLoginResponseJWTBody : POLoginResponseJWTBody <POMutableJWTBody>

@property (retain) NSString *aud;
@property (retain) NSString *iss;
@property (retain) NSDate *iat;
@property (retain) NSString *token_type;
@property (retain) NSNumber *expires_in;
@property (retain) NSNumber *refresh_token_expires_in;
@property (retain) NSDate *expires_on;
@property (retain) NSString *refresh_token;
@property (retain) NSString *id_token;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAud:(id)a0;
- (void)setIat:(id)a0;
- (void)setIss:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setExpires_in:(id)a0;
- (void)setExpires_on:(id)a0;
- (void)setId_token:(id)a0;
- (void)setRefresh_token:(id)a0;
- (void)setRefresh_token_expires_in:(id)a0;
- (void)setToken_type:(id)a0;

@end
