@class NSNumber, NSString, NSArray, BSColor, PBFPosterGallerySuggestedComplication;

@interface PBFPosterGalleryItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *spokenNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *descriptiveTextLocalizationKey;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *titleFontName;
@property (readonly, copy, nonatomic) BSColor *titleColor;
@property (readonly, copy, nonatomic) PBFPosterGallerySuggestedComplication *subtitleComplication;
@property (readonly, nonatomic) long long layoutType;
@property (readonly, nonatomic) NSNumber *modeSemanticType;
@property (readonly, copy, nonatomic) NSString *modeUUID;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSArray *landscapeComplications;
@property (readonly, nonatomic, getter=isBlankTemplate) BOOL blankTemplate;
@property (readonly, nonatomic) BOOL shouldShowAsShuffleStack;
@property (readonly, nonatomic) long long source;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 descriptorIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 displayNameLocalizationKey:(id)a3 spokenNameLocalizationKey:(id)a4 descriptiveTextLocalizationKey:(id)a5 localizedDisplayName:(id)a6 localizedSubtitle:(id)a7 titleFontName:(id)a8 titleColor:(id)a9 subtitleComplication:(id)a10 layoutType:(long long)a11 modeSemanticType:(id)a12 modeUUID:(id)a13 complications:(id)a14 landscapeComplications:(id)a15 blankTemplate:(BOOL)a16 shouldShowAsShuffleStack:(BOOL)a17 source:(long long)a18;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)proactiveRepresentation;

@end
