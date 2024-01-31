@class NSString;

@interface POTokenConfigJWTBody : _POJWTBodyBase

@property (readonly) NSString *userName;
@property (readonly) NSString *loginUserName;

- (id)userName;
- (id)mutableCopy;
- (id)loginUserName;

@end
