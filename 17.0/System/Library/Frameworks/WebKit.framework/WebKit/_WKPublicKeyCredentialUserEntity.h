@class NSData, NSString;

@interface _WKPublicKeyCredentialUserEntity : _WKPublicKeyCredentialEntity

@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSString *displayName;

- (void)dealloc;
- (id)initWithName:(id)a0 identifier:(id)a1 displayName:(id)a2;

@end
