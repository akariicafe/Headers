@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _sslClientTrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientName:(id)a0;

@end
