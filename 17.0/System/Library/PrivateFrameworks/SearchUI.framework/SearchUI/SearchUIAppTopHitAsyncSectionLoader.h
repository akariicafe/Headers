@class SFAppIconCardSection;

@interface SearchUIAppTopHitAsyncSectionLoader : SearchUIAsyncSectionLoader

@property (retain, nonatomic) SFAppIconCardSection *appIconCardSection;

+ (long long)maxNumOfTopHitEntities;
+ (BOOL)supportsSectionModel:(id)a0;

- (id)backgroundColor;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)cacheIdentifier;
- (id)cardSections;
- (BOOL)expectsSubtitle;
- (id)buildVerticalLayoutCardSectionFromResult:(id)a0 title:(id)a1 subtitle:(id)a2 command:(id)a3;
- (id)initWithSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (id)placeholderCardSections;
- (id)responseForCardSections:(id)a0 animated:(BOOL)a1;

@end
