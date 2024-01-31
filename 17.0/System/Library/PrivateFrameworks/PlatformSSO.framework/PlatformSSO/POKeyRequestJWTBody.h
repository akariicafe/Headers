@class NSString, NSDate;

@interface POKeyRequestJWTBody : _POJWTBodyBase

@property (readonly) NSString *request_type;
@property (readonly) NSString *version;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *username;
@property (readonly) NSString *key_purpose;

- (id)sub;
- (id)version;
- (id)mutableCopy;
- (id)username;
- (id)nonce;
- (id)exp;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)key_purpose;
- (id)refresh_token;
- (id)request_nonce;
- (id)request_type;

@end
