@class ICNetworkConstraints, NSString, ICURLResponseAuthenticationProvider, ICDeviceInfo, ICClientInfo;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _allowsMutation : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICClientInfo *clientInfo;
@property (readonly, nonatomic) ICDeviceInfo *deviceInfo;
@property (readonly, copy, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider;
@property (readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints;

- (void)setDeviceInfo:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void)setClientInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAuthenticationProvider:(id)a0;
- (BOOL)_allowsMutation;
- (id)_genericUserAgent;
- (id)_userAgentWithPlatformVersion;
- (id)_webkitUserAgentVersion;
- (id)initWithClientInfo:(id)a0 authenticationProvider:(id)a1;
- (void)setNetworkConstraints:(id)a0;

@end
