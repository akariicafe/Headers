@class HMFMessageDispatcher, NSPersistentHistoryToken, NSPersistentStore;
@protocol HMDResidentSyncServerDataSource, HMMLogEventSubmitting, HMDResidentDeviceManager;

@interface HMDResidentSyncServer : HMDResidentSyncController <HMDResidentSyncServer> {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    NSPersistentStore *_store;
    NSPersistentHistoryToken *_storeExemplarToken;
    BOOL _isPrimaryResident;
    NSPersistentHistoryToken *_currentToken;
    id<HMDResidentSyncServerDataSource> _dataSource;
}

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;

- (id)start;
- (void)stop;
- (void).cxx_destruct;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)_handleFetchHomeData:(id)a0;
- (long long)currentToken:(id *)a0 andHistory:(id *)a1 fromToken:(id)a2 limit:(long long)a3 error:(id *)a4;
- (id)decodeToken:(id)a0 error:(id *)a1;
- (void)handlePersistentStoreChanged:(id)a0;
- (id)initWithHome:(id)a0 codingModel:(id)a1 dispatcher:(id)a2 residentDeviceManager:(id)a3 notificationCenter:(id)a4 persistence:(id)a5 dataSource:(id)a6 logEventSubmitter:(id)a7;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;

@end
