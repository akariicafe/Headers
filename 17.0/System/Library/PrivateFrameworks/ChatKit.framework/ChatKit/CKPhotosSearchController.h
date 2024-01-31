@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (Class)cellClassForMode:(unsigned long long)a0;
+ (id)indexingString;
+ (id)relativeDateFormatter;
+ (id)reuseIdentifierForMode:(unsigned long long)a0;
+ (BOOL)supportsMacSelection;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)fetchAttributes;
- (double)interGroupSpacing;
- (id)filterQueries;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)sectionSubtitle;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (void)_filterControlTapped:(id)a0;
- (double)_internalInterGroupSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)cellForSupplementaryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementaryViewKind:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)filterQueriesBase;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (Class)headerOverrideClass;
- (id)initWithSectionIndex:(unsigned long long)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (void)saveAttachmentForResult:(id)a0;
- (unsigned long long)searchTokenContentType;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (BOOL)wantsHeaderSection;

@end
