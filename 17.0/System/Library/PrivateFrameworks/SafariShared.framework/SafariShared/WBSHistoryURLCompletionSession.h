@class WBSURLCompletionDatabase, NSString, WBSHistoryService, WBSHistoryServiceDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSURLCompletionDatabase *_urlCompletionDatabase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHistoryService:(id)a0;
- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 limit:(unsigned long long)a2 forQueryID:(long long)a3 withSearchParameters:(id)a4 completionHandler:(id /* block */)a5;
- (id)_databaseConnectionOptions;
- (void)_ensureDatabaseIsWarmed;
- (void)_getBestMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 limit:(unsigned long long)a2 forQueryID:(long long)a3 withSearchParameters:(id)a4 completionHandler:(id /* block */)a5;
- (id)_matchSnapshotForCompletionMatch:(id)a0;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 options:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;

@end
