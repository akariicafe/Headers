@class NSMutableData, NSString, NSDate;

@interface POLoginJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *assertion;
@property (readonly) NSString *client_id;
@property (readonly) NSString *scope;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *grant_type;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *username;
@property (readonly) NSMutableData *password;

- (id)assertion;
- (id)dataRepresentation;
- (id)sub;
- (void)dealloc;
- (id)scope;
- (id)password;
- (id)mutableCopy;
- (id)username;
- (id)description;
- (void).cxx_destruct;
- (id)nonce;
- (id)client_id;
- (id)exp;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)grant_type;
- (id)initWithJWTData:(id)a0;
- (id)refresh_token;
- (id)request_nonce;
- (void)zeroPassword;

@end
