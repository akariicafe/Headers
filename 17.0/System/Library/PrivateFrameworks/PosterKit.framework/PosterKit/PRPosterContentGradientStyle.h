@class NSArray, NSString, UIColor;

@interface PRPosterContentGradientStyle : NSObject <PRPosterContentStylePrivate, PRPosterContentStyle>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, nonatomic) unsigned long long gradientType;
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

- (void)encodeWithCoder:(id)a0;
- (id)initWithColors:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyStyleWithRenderer:(id)a0;
- (id)initWithColors:(id)a0 gradientType:(unsigned long long)a1 locations:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4;

@end
