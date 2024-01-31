@class UIFont, NSString, PRPosterTimeFontConfiguration, BSUIVibrancyConfiguration, PRPosterColor;

@interface PRPosterTitleStyleConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) UIFont *defaultTimeFont;
@property (class, readonly, nonatomic) unsigned long long defaultTitleAlignment;
@property (class, readonly, nonatomic) unsigned long long defaultTitleLayout;
@property (class, readonly, copy, nonatomic) PRPosterColor *defaultTitleColor;
@property (class, readonly, copy, nonatomic) NSString *defaultTimeNumberingSystem;
@property (class, readonly, nonatomic) double defaultContentsLuminance;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (readonly, nonatomic) unsigned long long preferredTitleAlignment;
@property (readonly, nonatomic) unsigned long long preferredTitleLayout;
@property (readonly, copy, nonatomic) PRPosterColor *titleColor;
@property (readonly, copy, nonatomic) NSString *timeNumberingSystem;
@property (readonly, nonatomic) double contentsLuminance;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic, getter=isUserConfigured) BOOL userConfigured;
@property (readonly, nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveTitleColor;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, copy, nonatomic) NSString *effectiveTimeNumberingSystem;
@property (readonly, nonatomic) BOOL prefersVerticalTitleLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultTitleFontForRole:(id)a0;

- (BOOL)isVisiblyEqualToTitleStyleConfiguration:(id)a0;
- (id)_vibrancyConfigurationWithExtensionBundleURL:(id)a0 luminanceReduced:(BOOL)a1;
- (id)vibrancyConfigurationWithExtensionBundle:(id)a0 luminanceReduced:(BOOL)a1;
- (id)init;
- (id)vibrancyConfigurationWithExtensionBundle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)effectiveTitleLayoutForText:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithTimeFontConfiguration:(id)a0 preferredTitleAlignment:(unsigned long long)a1 preferredTitleLayout:(unsigned long long)a2 titleColor:(id)a3 timeNumberingSystem:(id)a4 userConfigured:(BOOL)a5 contentsLuminance:(double)a6 alternateDateEnabled:(BOOL)a7 groupName:(id)a8;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)a0 luminanceReduced:(BOOL)a1;
- (id)initWithTitleStyleConfiguration:(id)a0;
- (Class)classForCoder;
- (id)effectiveTimeFontWithExtensionBundleURL:(id)a0 forRole:(id)a1;
- (id)effectiveTimeFontWithExtensionBundle:(id)a0 forRole:(id)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeFontConfiguration:(id)a0 titleColor:(id)a1 timeNumberingSystem:(id)a2;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)vibrancyConfigurationWithExtensionBundleURL:(id)a0;
- (id)effectiveTimeFontWithExtensionBundle:(id)a0;
- (unsigned long long)effectiveTitleAlignmentForText:(id)a0 withFont:(id)a1;
- (id)resolvedWithLookDefaultTitleStyleConfiguration:(id)a0 allowTitleColorUpdates:(BOOL)a1 allowTitleFontUpdates:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)effectiveTimeFontWithExtensionBundleURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
