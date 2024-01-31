@class NSArray, NSString, UIColor;

@interface PRPosterContentDiscreteColorsStyle : NSObject <PRPosterContentStylePrivate, PRPosterContentStyle, PRPosterContentStyleVariationSupporting> {
    BOOL _supportsVariation;
    double _variation;
    NSArray *_colors;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic, getter=isVibrant) BOOL vibrant;
@property (readonly, copy, nonatomic) NSString *nonVariatedIdentifier;
@property (readonly, nonatomic) BOOL isSupportedSystemStyle;
@property (readonly, nonatomic) BOOL isSupportedBackgroundStyle;
@property (readonly, nonatomic) BOOL desiresVibrancyEffectView;
@property (readonly, nonatomic) long long vibrancyEffectType;
@property (readonly, copy, nonatomic) UIColor *vibrancyEffectColor;
@property (readonly, copy, nonatomic) NSString *lutIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL allowsVariation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *variationAppliedColors;
@property (readonly, nonatomic) double minVariation;
@property (readonly, nonatomic) double maxVariation;
@property (readonly, nonatomic) double variation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOpaqueColors:(id)a0 variation:(double)a1;
- (void)applyStyleWithRenderer:(id)a0;
- (id)copyWithVariation:(double)a0;
- (id)initWithColors:(id)a0 vibrant:(BOOL)a1 supportsVariation:(BOOL)a2 variationValue:(double)a3;
- (id)initWithOpaqueColors:(id)a0;
- (id)initWithVibrantColors:(id)a0;
- (id)initWithVibrantColors:(id)a0 variation:(double)a1;

@end
