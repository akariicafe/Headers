@class NSString, NSDate;

@interface POKeyResponseJWTBody : _POJWTBodyBase

@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *certificate;
@property (readonly) NSString *key_context;

- (id)certificate;
- (id)mutableCopy;
- (id)exp;
- (id)iat;
- (id)key_context;

@end
