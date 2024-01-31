@class NSString, NSDate;

@interface POKeyExchangeResponseJWTBody : _POJWTBodyBase

@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *key;
@property (readonly) NSString *key_context;

- (id)mutableCopy;
- (id)key;
- (id)exp;
- (id)iat;
- (id)key_context;

@end
