@class NSMutableArray;

@interface CSTopHitQuery : CSUserQuery {
    NSMutableArray *_batches;
    unsigned long long _tokenCount;
}

+ (void)sortSearchableItemsByL2:(id)a0;

- (void)handleFoundItems:(id)a0;
- (void)handleFoundInstantAnswers:(id)a0;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void)handleCompletion:(id)a0;
- (BOOL)isTopHitQuery;
- (void).cxx_destruct;
- (unsigned long long)dispatchApplyWidth;
- (void)filterRankedItems:(id)a0 hitCount:(unsigned long long)a1;
- (id)initWithUserQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleBatches:(id)a0;

@end
