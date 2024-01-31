@class NSString, HKObserverSet, HDDaemon, NSMutableDictionary, NSDictionary, NSObject, TRIClient, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue, TRINotificationToken;

@interface HDOTAFeatureAvailabilityManager : NSObject <HDHealthDaemonReadyObserver> {
    HDDaemon *_daemon;
    TRIClient *_trialClient;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
    id<TRINotificationToken> _trialToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_factorFileCache;
}

@property (copy, nonatomic) NSString *unitTest_factorPath;
@property (readonly, copy, nonatomic) NSDictionary *unitTest_factorFileCache;
@property (retain, nonatomic) NSUserDefaults *unitTest_legacyDisableAndExpiryDefaults;
@property (copy, nonatomic) id /* block */ unitTest_daemonReadyObserverDidFinish;
@property (readonly, copy, nonatomic) NSString *factorPackID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithDaemon:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (void)_unitTest_refreshClientAndNotifyObservers;
- (id)_fileURLForFileNamed:(id)a0 factorPath:(id)a1;
- (void).cxx_destruct;
- (void)downloadWithCompletion:(id /* block */)a0;
- (id)featureAvailabilityInfoForFeature:(id)a0 error:(id *)a1;
- (id)disableAndExpiryConditionsDictionaryWithError:(id *)a0;
- (BOOL)downloadImmediatelyWithError:(id *)a0;

@end
