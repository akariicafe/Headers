@class NSString;

@interface PRPosterCustomTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *fontPostScriptName;
@property (readonly, copy, nonatomic) NSString *extensionBundleRelativeFilePath;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithFont:(id)a0 extensionBundle:(id)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithFont:(id)a0 extensionBundleURL:(id)a1;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)fontWithExtensionBundleURL:(id)a0;
- (id)initWithFontPostScriptName:(id)a0 extensionBundleRelativeFilePath:(id)a1;
- (id)initWithCoder:(id)a0;

@end
