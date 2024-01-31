@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)a0;

@end
