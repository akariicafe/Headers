@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (id)init;
- (void)dealloc;
- (void)runFirstBootTasks:(BOOL)a0;
- (void)restartTTSResourceMigration;
- (void)runFirstUnlockTasks;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1 forceCatalogRefresh:(BOOL)a2;
- (void)downloadTTSResourceForVoiceId:(id)a0;
- (void)_destroyXPCConnection;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (void)updateTTSResourcesForActionType:(unsigned long long)a0;
- (id)xpcConnection;
- (void)updateAssetForPolicy:(id)a0;
- (void)componentCacheChanged;
- (void)informSiriVoiceSubscriptionsWithVoiceId:(id)a0 addition:(BOOL)a1;

@end
