@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL isIdentity;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCommonName:(id)a0 data:(id)a1 isIdentity:(BOOL)a2;

@end
