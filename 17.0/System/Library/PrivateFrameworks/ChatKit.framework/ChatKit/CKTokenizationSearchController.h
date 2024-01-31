@class NSArray;

@interface CKTokenizationSearchController : CKConversationSearchController

@property (retain, nonatomic) NSArray *searchTokens;

+ (id)sectionIdentifier;
+ (id)reuseIdentifier;
+ (Class)cellClassForMode:(unsigned long long)a0;
+ (BOOL)isVisibleInCollectionView;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifierForMode:(unsigned long long)a0;
+ (id)supportedCellClasses;
+ (BOOL)supportsMenuInteraction;

- (double)interGroupSpacing;
- (void).cxx_destruct;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (BOOL)_hasCategoryTokenStaged;
- (void)_prependTokenClarificationOptionsToResults:(id)a0;
- (id)_tokenAddressesForSearchableItem:(id)a0 inConversation:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)appropriateCategoryTokensForSearchText:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (void)discardSuggestionResults;
- (BOOL)isTokenizationSearchController;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (unsigned long long)searchTokenContentType;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (BOOL)shouldShowConversationTokenSuggestionForConversationGUID:(id)a0;
- (BOOL)shouldShowFilterTokenSuggestion:(id)a0;
- (id)tokenizedQueryResultsForItems:(id)a0;
- (BOOL)wantsHeaderSection;

@end
