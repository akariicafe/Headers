@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray *_batches;
}

- (void)handleFoundItems:(id)a0;
- (void)handleFoundCompletions:(id)a0;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void)handleCompletion:(id)a0;
- (BOOL)isTopHitQuery;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)_handleBatches:(id)a0;
- (unsigned long long)dispatchApplyWidth;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;

@end
