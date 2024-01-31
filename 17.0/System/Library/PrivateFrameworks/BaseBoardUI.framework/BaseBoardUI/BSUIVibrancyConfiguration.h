@class UIColor, NSString, BSUIVibrancyLUT, BSUIVibrancyShadowValues, BSUIVibrancyEffectValues;

@interface BSUIVibrancyConfiguration : NSObject <NSCopying, NSSecureCoding> {
    BSUIVibrancyShadowValues *_shadowValues;
    BSUIVibrancyEffectValues *_effectValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long effectType;
@property (readonly, nonatomic) long long backgroundType;
@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *blendConfiguration;
@property (readonly, nonatomic) double blendAmount;
@property (readonly, copy, nonatomic) BSUIVibrancyLUT *alternativeVibrancyEffectLUT;
@property (readonly) BSUIVibrancyEffectValues *effectValues;
@property (readonly) BSUIVibrancyShadowValues *shadowValues;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithAlternativeVibrancyEffectLUT:(id)a0;
- (id)copyWithBlendAmount:(double)a0 blendConfiguration:(id)a1 alternativeVibrancyEffectLUT:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithEffectType:(long long)a0 backgroundType:(long long)a1 color:(id)a2;
- (id)copyWithBlendAmount:(double)a0 blendConfiguration:(id)a1;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithEffectType:(long long)a0 backgroundType:(long long)a1 color:(id)a2 groupName:(id)a3;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEffectType:(long long)a0 backgroundType:(long long)a1 color:(id)a2 groupName:(id)a3 blendConfiguration:(id)a4 blendAmount:(double)a5 alternativeVibrancyEffectLUT:(id)a6;
- (id)copyWithGroupName:(id)a0;
- (id)copyWithWithBackgroundType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithEffectType:(long long)a0 color:(id)a1;

@end
