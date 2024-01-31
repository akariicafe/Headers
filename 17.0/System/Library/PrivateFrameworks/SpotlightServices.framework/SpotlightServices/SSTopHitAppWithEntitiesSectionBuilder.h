@interface SSTopHitAppWithEntitiesSectionBuilder : SSSectionBuilder

+ (BOOL)supportsAppTopHitWithoutIndexFor:(id)a0;
+ (BOOL)supportsBonusSPI:(id)a0;
+ (BOOL)supportsFileProviderFor:(id)a0;
+ (BOOL)supportsSection:(id)a0;

- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSections;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;

@end
