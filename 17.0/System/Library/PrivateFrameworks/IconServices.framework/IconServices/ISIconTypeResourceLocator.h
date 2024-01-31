@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (void)encodeWithCoder:(id)a0;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)preferedResourceName;
- (id)initWithCoder:(id)a0;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;

@end
