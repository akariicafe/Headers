@class UIColor, NSString, _UILegibilitySettings;

@interface PRPosterLegibilitySettings : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying> {
    _UILegibilitySettings *_cachedLegibilitySettings;
    _UILegibilitySettings *_specifiedLegibilitySettings;
    double _shadowAlphaOverride;
    double _shadowRadiusMultiplier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long source;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (copy, nonatomic) UIColor *contentColor;
@property (nonatomic) double contrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)legibilitySettingsForContentColor:(id)a0 contrast:(double)a1;
+ (id)legibilitySettingsForStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3;
+ (id)legibilitySettingsWithUILegibilitySettings:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3;
- (id)convertToUILegibility;
- (BOOL)isEqualToLegibilitySettings:(id)a0;
- (id)legibilitySettingsByApplyingShadowRadiusMultiplier:(double)a0;
- (id)legibilitySettingsByOverridingShadowAlpha:(double)a0;

@end
