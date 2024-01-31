@interface PLScopedSearchSuggestionGeneration : NSObject

+ (id)_rankedSuggestionsFromSuggestions:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (double)_scoreForSuggestion:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (double)_suggestionScoreForIndexCategory:(unsigned long long)a0;
+ (id)_suggestionsOrderedUserCategories;
+ (id)generateCompletionSuggestionsFromGroups:(id)a0 queryMatchedScopedAssetIds:(struct __CFArray { } *)a1 queryMatchedScopedCollectionIds:(struct __CFArray { } *)a2 searchResultTypes:(unsigned long long)a3 normalizedSearchText:(id)a4 delegate:(id)a5;
+ (id)generateNextTermSuggestionsForQueryMatchedScopedAssetIds:(struct __CFArray { } *)a0 queryMatchedScopedCollectionIds:(struct __CFArray { } *)a1 searchResultTypes:(unsigned long long)a2 delegate:(id)a3;
+ (id)rankedSuggestionsFromSuggestionCandidates:(id)a0 suggestionType:(unsigned long long)a1 queryAssetCount:(unsigned long long)a2 queryCollectionCount:(unsigned long long)a3 suggestionLimit:(unsigned long long)a4;

@end
