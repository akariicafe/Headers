@class NSObject, WBSHistoryConnectionProxy;
@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;

@interface WBSURLCompletionSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSURLCompletionSessionProtocol> _completionSession;
    NSObject<OS_dispatch_queue> *_completionSessionAccessQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)getBestMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 limit:(unsigned long long)a2 forQueryID:(long long)a3 withSearchParameters:(id)a4 completionHandler:(id /* block */)a5;
- (void)_completionSessionWithCompletionHandler:(id /* block */)a0;
- (void)userDidSelectCompletionMatch:(id)a0 forTypedString:(id)a1;

@end
