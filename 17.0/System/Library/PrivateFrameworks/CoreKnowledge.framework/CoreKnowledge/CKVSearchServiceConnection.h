@class KVTokenizer, NSString, CKVDatabaseSearcher, KVSpanMatcher;

@interface CKVSearchServiceConnection : NSObject <CKVSearchService> {
    CKVDatabaseSearcher *_databaseSearcher;
    KVSpanMatcher *_spanMatcher;
    NSString *_userId;
    KVTokenizer *_tokenizer;
}

- (void).cxx_destruct;
- (id)matchSpansOfString:(id)a0;
- (id)_convertFTSResultsToSearchResults:(id)a0;
- (id)_convertSpanMatchResults:(id)a0;
- (id)initWithUserId:(id)a0 databaseSearcherProvider:(id)a1 spanMatcherProvider:(id)a2;
- (id)matchSpansWithTokenChain:(id)a0;
- (void)prewarmSpanMatcher;
- (id)searchFTSWithCriteria:(id)a0 error:(id *)a1;

@end
