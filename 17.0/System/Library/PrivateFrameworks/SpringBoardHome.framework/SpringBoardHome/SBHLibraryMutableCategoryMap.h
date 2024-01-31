@class NSArray, NSDictionary;

@interface SBHLibraryMutableCategoryMap : SBHLibraryCategoryMap

@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (copy, nonatomic) NSDictionary *metadata;

- (void)addApplicationIdentifier:(id)a0 forCategoryIdentifier:(id)a1;
- (void)addCategoryIdentifier:(id)a0;
- (void)removeCategoryIdentifier:(id)a0;
- (void)setLocalizedCategoryName:(id)a0 forCategoryIdentifier:(id)a1;
- (void)setSortedApplicationIdentifiers:(id)a0 forCategoryIdentifier:(id)a1;
- (void)sortApplicationIdentifiersForCategoryIdentifier:(id)a0 descriptors:(id)a1;
- (void)updateRecentlyAddedCategoryFromMap:(id)a0;

@end
