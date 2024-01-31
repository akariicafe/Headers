@class NSString, NSMutableDictionary, AWDAgent, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (BOOL)launchHealthCheck:(id)a0;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (void)leaveBreadcrumbForIntegrityCheck;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (void)clearIntegrityCheckBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (void)appendLaunchTime;
+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (id)configureClass:(id)a0;

- (id)init;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)integrityCheckStarted;
- (int)configureInstance:(id)a0;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_launchSequence:(id)a0;
- (void)destroyPersistentStoreStarted;
- (void)launchSequence;

@end
