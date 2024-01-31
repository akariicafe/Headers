@interface PPSocialHighlightStore : NSObject

+ (double)decayInterval;

- (id)init;
- (BOOL)iterRankedCollaborationsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (void)feedbackForHighlightIdentifier:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (BOOL)iterRankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (void)feedbackForHighlightResourceURL:(id)a0 resolvedURL:(id)a1 type:(unsigned long long)a2 client:(id)a3 variant:(id)a4 completion:(id /* block */)a5;
- (void)feedbackForAttributionIdentifier:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (BOOL)iterRankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;

@end
