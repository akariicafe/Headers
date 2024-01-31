@class NSError, NSDictionary, ATXContextualSuggestionSnapshot;

@interface ContextualSuggestionClient.ContextualEngineInternalClient : NSObject <ATXContextualEngineInternalInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateWithCompletion:(void (^)(NSError *))a0;
- (void)fetchAllSnapshotsWithCompletion:(void (^)(NSDictionary *, NSError *))a0;
- (void)fetchSnapshotOverrideWithCompletion:(void (^)(ATXContextualSuggestionSnapshot *, NSError *))a0;
- (void)overrideWithSnapshot:(ATXContextualSuggestionSnapshot *)a0 completion:(void (^)(NSError *))a1;

@end
