@class NSString;

@interface PRPosterTimeFontConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) PRPosterTimeFontConfiguration *defaultConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic, getter=isSystemItem) BOOL systemItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithTimeFontConfiguration:(id)a0 extensionBundleIdentifier:(id)a1 systemItem:(BOOL)a2;
+ (id)configurationWithTimeFontConfiguration:(id)a0 extensionBundleURL:(id)a1 systemItem:(BOOL)a2;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)timeFontIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)timeFontConfigurationWithExtensionBundle:(id)a0;
- (id)timeFontConfigurationWithExtensionBundleIdentifier:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
