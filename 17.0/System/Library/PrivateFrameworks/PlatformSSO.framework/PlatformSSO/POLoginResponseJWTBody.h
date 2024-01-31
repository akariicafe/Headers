@class NSString, NSNumber, NSDate;

@interface POLoginResponseJWTBody : _POJWTBodyBase

@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSDate *iat;
@property (readonly) NSString *token_type;
@property (readonly) NSNumber *expires_in;
@property (readonly) NSNumber *refresh_token_expires_in;
@property (readonly) NSDate *expires_on;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *id_token;

- (id)mutableCopy;
- (id)aud;
- (id)iss;
- (id)expires_in;
- (id)expires_on;
- (id)id_token;
- (id)refresh_token;
- (id)refresh_token_expires_in;
- (id)token_type;

@end
