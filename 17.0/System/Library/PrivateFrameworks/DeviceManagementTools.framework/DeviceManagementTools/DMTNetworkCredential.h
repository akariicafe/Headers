@class NSString;

@interface DMTNetworkCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *credential;

+ (id)credentialWithNetworkName:(id)a0 credential:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNetworkName:(id)a0 credential:(id)a1;
- (BOOL)isEqualToCredential:(id)a0;

@end
