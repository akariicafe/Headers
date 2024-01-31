@class ATDeviceSettings, NSMutableArray;
@protocol ATSyncClient;

@interface ATDeviceSyncSessionSyncTask : ATDeviceSyncSessionTask {
    id<ATSyncClient> _pluginClient;
    ATDeviceSettings *_settings;
    NSMutableArray *_streamReaders;
    BOOL _addedTransportUpgradeException;
    BOOL _isFinishing;
    double _taskStartTime;
    unsigned long long _syncIterationCount;
    unsigned long long _totalItemsSyncedCount;
    unsigned long long _clientCurrentItemCount;
    unsigned long long _clientTotalItemCount;
    unsigned long long _serverCurrentItemCount;
    unsigned long long _serverTotalItemCount;
}

@property (nonatomic) BOOL startAssetTaskWhenFinished;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)_applyChangesForSyncResponse:(id)a0 toCurrentRevision:(unsigned long long)a1 versionToken:(id)a2 onMessageLink:(id)a3;
- (void)_drainInputStream:(id)a0 withCompletion:(id /* block */)a1;
- (void)_finishSyncWithError:(id)a0;
- (void)_finishTaskWithError:(id)a0;
- (void)_processSyncRequest:(id)a0 onMessageLink:(id)a1;
- (void)_processSyncResponse:(id)a0 onMessageLink:(id)a1;
- (void)_resetSyncDataForLibrary:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_sendSyncRequestOnMessageLink:(id)a0;
- (void)_sendSyncRequestWithChangesAfterRevision:(unsigned long long)a0 toRevision:(unsigned long long)a1 withNewRevision:(unsigned long long)a2 withSyncType:(unsigned int)a3 onMessageLink:(id)a4;
- (void)_sendSyncRequestWithParams:(id)a0 withSyncType:(unsigned int)a1 syncState:(id)a2 newRevision:(unsigned long long)a3 versionToken:(id)a4 inputStream:(id)a5 onMessageLink:(id)a6;
- (void)_sendSyncResponseToRequest:(id)a0 withChangesAfterRevision:(unsigned long long)a1 toRevision:(unsigned long long)a2 withNewRevision:(unsigned long long)a3 withSyncType:(unsigned int)a4 onMessageLink:(id)a5;
- (void)_sendSyncResponseToRequest:(id)a0 withParams:(id)a1 withNewRevision:(unsigned long long)a2 withSyncType:(unsigned int)a3 inputStream:(id)a4 onMessageLink:(id)a5;
- (void)_updateProgressWithCount:(unsigned long long)a0 totalItemCount:(unsigned long long)a1 forEndpointType:(int)a2;
- (id)initWithDataClass:(id)a0 onMessageLink:(id)a1;
- (id)sessionGroupingKey;

@end
