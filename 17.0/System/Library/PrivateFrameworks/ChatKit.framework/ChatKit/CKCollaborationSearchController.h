@class NSString;

@interface CKCollaborationSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)indexingString;
+ (id)supportedCellClasses;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)fetchAttributes;
- (double)interGroupSpacing;
- (id)filterQueries;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)linksController;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;
- (id)cellForSupplementaryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementaryViewKind:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id /* block */)createFoundItemsHandler;
- (void)deleteAttachmentForResult:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)reuseIdentifierForIndex:(long long)a0;
- (unsigned long long)searchTokenContentType;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;

@end
