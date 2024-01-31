@interface PLSpotlightQueryUtility : NSObject

+ (id)_parseTokenTypes:(id)a0;
+ (id)baseQueryContext;
+ (id)baseQueryFromPSIQuery:(id)a0 queryContext:(id)a1;
+ (void)mapQueryEntitiesToQueryParsedTermsForQueryParse:(id)a0 searchableItems:(id)a1 psiQuery:(id)a2 completion:(id /* block */)a3;

@end
