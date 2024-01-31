@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LSInProcessSettingsStore : LSSettingsStore {
    NSObject<OS_dispatch_source> *_dbCloseTimer;
}

@property (nonatomic) struct sqlite3 { } *database;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;

- (id)init;
- (void)dealloc;
- (void)_internalQueue_loadDatabase;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)a0;
- (void)_internalQueue_purgeDatabase;
- (unsigned char)userElectionForExtensionKey:(id)a0;
- (void).cxx_destruct;

@end
