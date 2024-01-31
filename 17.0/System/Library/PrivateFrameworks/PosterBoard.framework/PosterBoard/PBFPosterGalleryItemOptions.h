@class NSArray, PBFPosterGallerySuggestedComplication, NSString;

@interface PBFPosterGalleryItemOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *modularComplications;
@property (readonly, copy, nonatomic) NSArray *modularLandscapeComplications;
@property (readonly, copy, nonatomic) PBFPosterGallerySuggestedComplication *inlineComplication;
@property (readonly, nonatomic) BOOL allowsSystemSuggestedComplications;
@property (readonly, nonatomic) BOOL allowsSystemSuggestedComplicationsInLandscape;
@property (readonly, nonatomic) long long featuredConfidenceLevel;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *spokenNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *descriptiveTextLocalizationKey;
@property (readonly, nonatomic, getter=isHero) BOOL hero;
@property (readonly, nonatomic) BOOL shouldShowAsShuffleStack;
@property (readonly, nonatomic) long long photoSubtype;
@property (readonly, nonatomic) long long focus;
@property (readonly, nonatomic, getter=isOnlyEligibleForMadeForFocusSection) BOOL onlyEligibleForMadeForFocusSection;

+ (id)itemOptionsWithDictionaryRepresentation:(id)a0 error:(id *)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModularComplications:(id)a0 modularLandscapeComplications:(id)a1 inlineComplication:(id)a2 allowsSystemSuggestedComplications:(BOOL)a3 allowsSystemSuggestedComplicationsInLandscape:(BOOL)a4 featuredConfidenceLevel:(long long)a5 displayNameLocalizationKey:(id)a6 spokenNameLocalizationKey:(id)a7 descriptiveTextLocalizationKey:(id)a8 hero:(BOOL)a9 shouldShowAsShuffleStack:(BOOL)a10 photoSubtype:(long long)a11 focus:(long long)a12 onlyEligibleForMadeForFocusSection:(BOOL)a13;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)proactiveRepresentation;

@end
