@class NSSet, NSArray, NSString, _PSSuggester;

@interface CKConversationSearchController : CKSearchController <CKConversationSearchResultCellDelegate>

@property (nonatomic) BOOL gotResults;
@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) BOOL searchTerminated;
@property (retain, nonatomic) _PSSuggester *zkwSuggester;
@property (retain, nonatomic) NSArray *currentZKWSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)_shouldUseAvatarCellsForMode:(unsigned long long)a0;
+ (Class)cellClassForMode:(unsigned long long)a0;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifierForMode:(unsigned long long)a0;
+ (id)supportedCellClasses;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;

- (id)fetchAttributes;
- (double)interGroupSpacing;
- (void).cxx_destruct;
- (id)filterQueries;
- (void)didSelectResult:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)_sortedAndRankedItemsWithItems:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (id)_appendRecencyToRankingQuery:(id)a0 hours:(unsigned long long)a1;
- (void)_searchZKWWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (BOOL)isTokenizationSearchController;
- (id)layoutGroupWithEnvironment:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)navigationBarTitleSummaryForSearchText:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (id)rankingQueriesWithText:(id)a0;
- (void)searchEnded;
- (void)searchSpotlightWithText:(id)a0 mode:(unsigned long long)a1;
- (unsigned long long)searchTokenContentType;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (id)tokenizedQueryResultsForItems:(id)a0;
- (BOOL)wantsHeaderSection;
- (double)widthForDeterminingAvatarVisibility;

@end
