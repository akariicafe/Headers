@interface SFCompletionList : NSObject

+ (id)_filterSearchLinks:(id)a0;
+ (id)_getResultSections:(id)a0 topHitMatches:(id)a1;
+ (void)_resultsForQueryLegacy:(id)a0 completion:(id /* block */)a1;
+ (void)resetSearchParameters;
+ (void)resultsForQuery:(id)a0 completion:(id /* block */)a1;
+ (void)setSearchParameter:(id)a0 toValue:(id)a1;

@end
