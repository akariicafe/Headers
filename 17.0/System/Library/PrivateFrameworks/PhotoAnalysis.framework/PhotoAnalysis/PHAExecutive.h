@class NSString, PHAPhotoLibraryList, NSMutableDictionary, PHAActivityLog, NSMutableArray, NSObject, PHAMusicActivity, NSMutableSet;
@protocol OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivityDelegate, PHAServiceOperationHandling, NSXPCListenerDelegate> {
    BOOL _isPhotoAnalysisAgent;
    BOOL _backgroundAnalysisActivityTriggered;
    NSObject<OS_dispatch_queue> *_executiveStateQueue;
    NSMutableArray *_processingLog;
    PHAActivityLog *_currentLog;
    NSMutableSet *_pendingBackgroundLibraries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectedClientsLock;
    BOOL _shouldDeferActivity;
    NSMutableSet *_runningActivities;
}

@property (retain) NSMutableDictionary *clientsByLibraryPath;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property unsigned char state;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (retain) PHAMusicActivity *musicActivity;
@property (readonly) PHAActivityLog *activityLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregisterAllActivities;

- (id)statusAsDictionary;
- (void)shutdown;
- (id)init;
- (void)dealloc;
- (id)managerForPhotoLibraryURL:(id)a0;
- (void)_installBackgroundAnalysisMonitor;
- (void)handleOperation:(id)a0;
- (void)_startBackgroundAnalysis;
- (void)_backgroundActivityDidBegin;
- (void)_localeDidChangeNotification:(id)a0;
- (void)setupAnalyticsEnvironment;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)clientInfoForManager:(id)a0;
- (void)_registerBackgroundActivity;
- (void)_stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (void)checkQuiescenceForManager:(id)a0;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)stopBackgroundActivityForManager:(id)a0;
- (BOOL)_photoAnalysCoreDuetSchedulingDisabled;
- (void)terminateManagerForPhotoLibraryURL:(id)a0;
- (void)writeQALog:(id)a0;
- (void)updatePropertiesOfXPCActivity:(id)a0;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)a0;
- (void)stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (BOOL)registerActivityToRun:(id)a0;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)addClientHandler:(id)a0 forLibraryURL:(id)a1;
- (void).cxx_destruct;
- (void)unregisterRunningActivity:(id)a0;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)_stopAllBackgroundAnalysisWithCompletion:(id /* block */)a0;
- (BOOL)_photoAnalysisEnabled;
- (void)removeClientHandler:(id)a0;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)a0;
- (BOOL)hasPhotosConnectionForManager:(id)a0;
- (void)triggerBackgroundActivity;
- (void)startup;
- (void)stopAllBackgroundActivities;
- (void)addProcessingActivityToStatusDictionary:(id)a0;
- (BOOL)hasConnectedClientsForManager:(id)a0;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)a0 skipActivityStateCheck:(BOOL)a1;
- (void)dumpStatusToLog;
- (void)notifyLibraryAvailableAtURL:(id)a0;

@end
