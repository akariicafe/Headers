@interface SSPhotosSectionBuilder : SSSectionBuilder

+ (unsigned long long)maxVisibleColumnsInPhotosSection;
+ (id)supportedBundleIds;

- (long long)maxCardSections;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCardSections;
- (id)buildCollectionStyle;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
