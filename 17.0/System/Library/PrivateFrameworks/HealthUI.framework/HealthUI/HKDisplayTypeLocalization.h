@class NSString, NSDictionary, NSSet;

@interface HKDisplayTypeLocalization : NSObject <NSCopying> {
    NSString *_labelDisplayNameKey;
    NSString *_shortenedDisplayNameKey;
    NSString *_embeddedDisplayNameKey;
    NSString *_titleEmbeddedDisplayNameKey;
    NSString *_keywordsNameKey;
    NSString *_summaryNameKey;
    NSString *_summaryIPadNameKey;
    NSString *_summaryForEnhancedFeatureNameKey;
    NSString *_summaryPairedWatchNameKey;
    NSString *_displayNameFitnessJrKey;
    NSString *_summaryFitnessJrKey;
    NSString *_cautionaryTextKey;
    NSString *_unitChangeCautionaryTextKey;
}

@property (readonly, copy, nonatomic) NSString *localizationTableNameOverride;
@property (readonly, copy, nonatomic) NSString *displayNameKey;
@property (readonly, copy, nonatomic) NSString *localizedKeySuffix;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayNameForFitnessJr;
@property (readonly, copy, nonatomic) NSString *shortenedDisplayName;
@property (readonly, copy, nonatomic) NSString *embeddedDisplayName;
@property (readonly, copy, nonatomic) NSString *titleEmbeddedDisplayName;
@property (readonly, copy, nonatomic) NSString *labelDisplayName;
@property (readonly, copy, nonatomic) NSDictionary *unitNameKeyOverrides;
@property (readonly, copy, nonatomic) NSSet *keywords;
@property (readonly, copy, nonatomic) NSString *cautionaryText;
@property (readonly, copy, nonatomic) NSString *unitChangeCautionaryText;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *summaryForEnhancedFeature;
@property (readonly, nonatomic) NSString *summaryForFitnessJr;
@property (readonly, nonatomic) NSString *summaryForPairedWatch;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_expandLocalizationKeys;
- (id)_localizedStringForKeyOrNil:(id)a0;
- (id)_localizedStringWithKey:(id)a0;
- (id)_rawLocalizedStringForKey:(id)a0;
- (id)copyWithLocalizationTableNameOverride:(id)a0;
- (id)copyWithLocalizedKeySuffix:(id)a0;
- (id)initWithDisplayNameKey:(id)a0 labelDisplayNameKey:(id)a1 localizationTableNameOverride:(id)a2 localizedKeySuffix:(id)a3 unitNameKeyOverrides:(id)a4;
- (id)unitDisplayNameKeyOverrideForUnit:(id)a0 nameContext:(long long)a1;

@end
