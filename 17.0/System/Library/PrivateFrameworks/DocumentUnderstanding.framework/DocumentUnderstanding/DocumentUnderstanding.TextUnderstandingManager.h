@class _TtC21DocumentUnderstanding24TextUnderstandingManager;

@interface DocumentUnderstanding.TextUnderstandingManager : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_client;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updater;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bulkupdater;
}

@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding24TextUnderstandingManager *shared;

- (id)init;
- (void)pingWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)addSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)incrementallyUpdatePoem;
- (void)onBoardPoem;
- (void)triggerSpotlightFileUpdateNoArgsWithReply:(id /* block */)a0;

@end
