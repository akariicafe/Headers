@interface NETransparentProxyProviderProtocol : NETunnelProviderProtocol

@property unsigned long long order;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPluginType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
