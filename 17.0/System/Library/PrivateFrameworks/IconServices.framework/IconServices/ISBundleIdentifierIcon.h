@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (double)_aspectRatio;
- (id)makeSymbolResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;

@end
