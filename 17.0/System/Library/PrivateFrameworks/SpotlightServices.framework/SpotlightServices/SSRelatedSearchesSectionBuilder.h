@interface SSRelatedSearchesSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (id)buildCardSections;
- (id)buildTitle;
- (BOOL)shouldSkipSection;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
