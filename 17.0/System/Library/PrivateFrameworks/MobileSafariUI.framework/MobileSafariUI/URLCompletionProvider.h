@class NSArray, NSString, URLCompletionDatabase, WBSCompletionQuery, NSObject;
@protocol WBSParsecSearchSession, WBBookmarkProvider, OS_dispatch_queue;

@interface URLCompletionProvider : CompletionProvider {
    id<WBBookmarkProvider> _bookmarkProvider;
    unsigned long long _maxResults;
    NSString *_currentPrefix;
    BOOL _historyWasModified;
    BOOL _bookmarksWereModified;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _prefixMutex;
    unsigned long long _urlCompletionBackgroundTaskIdentifier;
    URLCompletionDatabase *_completionDatabase;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_cfCompletionQueue;
    BOOL _needScheduleBackgroundTaskOnAppSuspend;
    WBSCompletionQuery *_query;
}

@property (nonatomic) BOOL providesTopHits;
@property (retain, nonatomic) id<WBSParsecSearchSession> parsecSearchSession;
@property (retain, nonatomic) NSArray *searchParametersList;

- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)_endURLCompletionBackgroundTask;
- (id)completionsForQuery:(id)a0 isCFSearch:(BOOL)a1;
- (void)_bookmarksDidChange:(id)a0;
- (id)_doUpdateForPrefix:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 withSearchParameters:(id)a2;
- (void)_historyDidChange:(id)a0;
- (unsigned long long)cfErrorForQuery:(id)a0;
- (void)clearCachedCompletions;
- (id)findCompletionsForKey:(id)a0 isCFSearch:(BOOL)a1;
- (id)getKeyForQueryString:(id)a0 isCFSearch:(BOOL)a1;
- (id)initWithBookmarkProvider:(id)a0 cloudTabStore:(id)a1 profileIdentifier:(id)a2 maxResults:(unsigned long long)a3 searchableCollectionsMask:(int)a4;
- (unsigned long long)maximumCachedCompletionCount;
- (void)setQueryToComplete:(id)a0;

@end
