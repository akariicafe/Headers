@class NSString, UIColor, NSArray;

@interface PRPosterContentLUTStyle : NSObject <PRPosterContentStylePrivate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *lutIdentifier;
@property (readonly, copy, nonatomic) NSString *nonVariatedIdentifier;
@property (readonly, nonatomic) BOOL isSupportedSystemStyle;
@property (readonly, nonatomic) BOOL isSupportedBackgroundStyle;
@property (readonly, nonatomic) BOOL desiresVibrancyEffectView;
@property (readonly, nonatomic) long long vibrancyEffectType;
@property (readonly, copy, nonatomic) UIColor *vibrancyEffectColor;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) BOOL allowsVariation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLUTIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyStyleWithRenderer:(id)a0;

@end
