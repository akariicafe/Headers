@class NSMutableData, NSString, NSDate;

@interface POAssertionJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSMutableData *password;

- (id)dataRepresentation;
- (id)sub;
- (void)dealloc;
- (id)scope;
- (id)password;
- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)nonce;
- (id)exp;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)initWithJWTData:(id)a0;
- (id)request_nonce;
- (void)zeroPassword;

@end
