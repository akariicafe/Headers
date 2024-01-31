@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long type;
@property (readonly) NSString *address;
@property (readonly) long long port;
@property BOOL authenticationRequired;
@property (copy) NSString *username;
@property (copy) NSString *password;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPassword;
- (id)initWithAddress:(id)a0 port:(long long)a1;
- (id)initWithType:(long long)a0 address:(id)a1 port:(long long)a2;

@end
