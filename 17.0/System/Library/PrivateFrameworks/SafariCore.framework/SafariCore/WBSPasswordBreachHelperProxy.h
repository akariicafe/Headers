@class NSXPCConnection;

@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)addResultRecordDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)runLookupSessionIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
