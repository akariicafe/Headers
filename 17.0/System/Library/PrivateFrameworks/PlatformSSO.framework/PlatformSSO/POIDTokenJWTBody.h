@class NSString, NSArray, NSDate;

@interface POIDTokenJWTBody : _POJWTBodyBase

@property (readonly) NSString *aud;
@property (readonly) NSArray *audArray;
@property (readonly) NSString *azp;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *nbf;
@property (readonly) NSString *nonce;
@property (readonly) NSString *name;
@property (readonly) NSString *preferred_username;
@property (readonly) NSArray *groups;

- (id)sub;
- (id)groups;
- (id)mutableCopy;
- (id)name;
- (id)exp;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)azp;
- (id)nbf;
- (id)audArray;
- (id)preferred_username;

@end
