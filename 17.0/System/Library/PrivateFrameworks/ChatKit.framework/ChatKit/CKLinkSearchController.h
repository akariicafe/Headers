@interface CKLinkSearchController : CKMessageTypeSearchController

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)_additionalMenuElementsForResult:(id)a0;
+ (Class)cellClassForMode:(unsigned long long)a0;
+ (BOOL)handleSelectionForResult:(id)a0;
+ (id)indexingString;
+ (id)itemProviderForSearchResult:(id)a0;
+ (id)reuseIdentifierForMode:(unsigned long long)a0;

- (id)fetchAttributes;
- (double)interGroupSpacing;
- (id)filterQueries;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (Class)_richLinkDatasourceClass;
- (id)cellForSupplementaryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementaryViewKind:(id)a2;
- (void)deleteAttachmentForResult:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (void)postProcessAndUpdateResults:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (unsigned long long)searchTokenContentType;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;

@end
