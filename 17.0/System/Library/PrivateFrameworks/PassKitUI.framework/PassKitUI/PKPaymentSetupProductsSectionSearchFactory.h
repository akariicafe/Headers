@interface PKPaymentSetupProductsSectionSearchFactory : NSObject

+ (void)_applySortToSectionList:(id)a0 usingSearchRankingMapping:(id)a1;
+ (id)_cleanedSearchTermsFromString:(id)a0 usingTokenizerCharacterSet:(id)a1;
+ (id)_createSortedSectionsListFromFilteredListItems:(id)a0;
+ (double)_distanceBetweenTerms:(id)a0 andSearchTerms:(id)a1;
+ (id)_filteredListItemsFromSearchFilter:(id)a0 withContext:(id)a1 listItems:(id)a2 outSectionIdentifierToSearchRankingMapping:(id *)a3;
+ (id)generateSectionsWithSearchFilter:(id)a0 forItems:(id)a1 withContext:(id)a2;

@end
