@interface CKWalletItemSearchController : CKMessageTypeSearchController

+ (Class)cellClass;
+ (id)sectionIdentifier;
+ (id)reuseIdentifier;
+ (id)sectionTitle;
+ (id)indexingString;
+ (BOOL)previewControllerPresentsModally;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifierForMode:(unsigned long long)a0;
+ (id)supportedCellClasses;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)fetchAttributes;
- (double)interGroupSpacing;
- (id)filterQueries;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_addOrderViewControllerForURL:(id)a0;
- (id)_addPassViewControllerForURL:(id)a0;
- (id)cellForSupplementaryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementaryViewKind:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (unsigned long long)searchTokenContentType;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;

@end
