@class NSURLSession, NSString, WBSCompletionQuery, NSMutableSet, UniversalSearchSession, NSObject, WBSSearchSuggestionsFetcher;
@protocol OS_dispatch_queue, LoadProgressObserver;

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate> {
    NSString *_currentSearchString;
    WBSCompletionQuery *_currentCompletionQuery;
    NSString *_userAgentString;
    WBSSearchSuggestionsFetcher *_searchSuggestionsFetcher;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableSet *_pendingTasks;
    BOOL _forPrivateBrowsing;
}

@property (weak, nonatomic) id<LoadProgressObserver> loadProgressObserver;
@property (weak, nonatomic) UniversalSearchSession *universalSearchSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)_didFinishSearchTask:(id)a0;
- (void)_willStartSearchTask:(id)a0;
- (id)completionsForQuery:(id)a0;
- (id)initForPrivateBrowsing:(BOOL)a0;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setQueryToComplete:(id)a0;
- (id)suggestionStringsForData:(id)a0;

@end
