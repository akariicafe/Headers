@class NSString, _KSTextReplacementServerConnection;

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {
    _KSTextReplacementServerConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeAllEntries;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)cancelPendingUpdates;
- (void)requestSyncWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)textReplacementEntries;
- (void)performTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)queryTextReplacementsWithCallback:(id /* block */)a0;
- (void)queryTextReplacementsWithPredicate:(id)a0 callback:(id /* block */)a1;
- (id)phraseShortcuts;
- (void)modifyEntry:(id)a0 toEntry:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
