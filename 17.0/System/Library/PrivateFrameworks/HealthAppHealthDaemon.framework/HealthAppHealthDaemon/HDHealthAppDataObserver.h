@class _HKDelayedOperation, HDHAHealthPluginHostFeedGenerator, HDProfile, NSString, NSObject, HDDataManager;
@protocol OS_dispatch_queue;

@interface HDHealthAppDataObserver : NSObject <HDCloudSyncManagerObserver, HDDataObserver>

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)start;
- (void)debounceRunBackgroundGeneration;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(BOOL)a1;
- (void)observeForAlertSampleTypes;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (id)initWithProfile:(id)a0 debounceTime:(double)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void).cxx_destruct;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;
- (void)cloudSyncManager:(id)a0 didUpdateLastLitePushDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (id)alertSampleTypes;
- (void)runBackgroundGeneration;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;

@end
