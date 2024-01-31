@class UIColor, NSString, PRPosterColorHSLValues, PRPosterColorValues;

@interface PRPosterColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) PRPosterColor *vibrantMaterialColor;
@property (class, readonly, nonatomic) PRPosterColor *vibrantMonochromeColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRPosterColorValues *colorValues;
@property (readonly) PRPosterColorValues *hsbValues;
@property (readonly) PRPosterColorHSLValues *hslValues;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) unsigned long long preferredStyle;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic, getter=isVibrantMaterialColor) BOOL vibrantMaterialColor;
@property (readonly, nonatomic, getter=isVibrantMonochromeColor) BOOL vibrantMonochromeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForColorWithValues:(id)a0 style:(unsigned long long)a1;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)styleStringForStyle:(unsigned long long)a0;

- (id)colors;
- (id)initWithIdentifier:(id)a0 color:(id)a1 preferredStyle:(unsigned long long)a2;
- (id)initWithHue:(double)a0 saturation:(double)a1 luminance:(double)a2 alpha:(double)a3 preferredStyle:(unsigned long long)a4 suggested:(BOOL)a5;
- (id)initWithHue:(double)a0 saturation:(double)a1 luminance:(double)a2 alpha:(double)a3 preferredStyle:(unsigned long long)a4 localizedName:(id)a5 suggested:(BOOL)a6;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithColor:(id)a0 preferredStyle:(unsigned long long)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)requiresVibrancyEffectView;
- (id)initWithLUTIdentifier:(id)a0;
- (BOOL)isEquivalentToColor:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 color:(id)a1 colorValues:(id)a2 preferredStyle:(unsigned long long)a3;
- (id)vibrancyConfiguration;
- (id)initWithIdentifier:(id)a0 color:(id)a1 colorValues:(id)a2 preferredStyle:(unsigned long long)a3 localizedName:(id)a4 suggested:(BOOL)a5;
- (id)copyAsSuggestedColor;
- (id)initWithColor:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)contentStyle;
- (id)initWithColor:(id)a0 preferredStyle:(unsigned long long)a1 localizedName:(id)a2 suggested:(BOOL)a3;
- (id)lutIdentifier;
- (id)initWithIdentifier:(id)a0 color:(id)a1 colorValues:(id)a2 preferredStyle:(unsigned long long)a3 localizedName:(id)a4;
- (id)copyWithLuminance:(double)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLUTBackedColor;
- (id)initWithPosterColor:(id)a0;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0 preferredStyle:(unsigned long long)a1 localizedName:(id)a2;
- (id)copyWithAlpha:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
