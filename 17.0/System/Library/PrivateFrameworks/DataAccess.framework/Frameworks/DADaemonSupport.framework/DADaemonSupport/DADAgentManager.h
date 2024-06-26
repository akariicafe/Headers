@class NSArray, NSMutableDictionary, NSDictionary, DADAgentStopStartController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DADAgentManager : NSObject <DADAgentStopStartControllerDelegate> {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    DADAgentStopStartController *_startStopController;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    BOOL _registeredForBuddy;
}

@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (BOOL)_shouldAccount:(id)a0 syncWhenSyncingParentAccountWithID:(id)a1;
+ (BOOL)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;

- (void)removePendingAccountSetup;
- (BOOL)processFolderChange:(id)a0 forAccountWithID:(id)a1 completionBlock:(id /* block */)a2;
- (id)currentPolicyKeyForAccount:(id)a0;
- (id)init;
- (void)_handleCellularDataUsageChangedNotification;
- (void)dealloc;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2 forAccountID:(id)a3;
- (id)_configFileForAgent:(id)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (BOOL)hasPendingAccountSetup;
- (void)reportFolderItemsSyncSuccess:(BOOL)a0 forFolderWithID:(id)a1 withItemsCount:(unsigned long long)a2 andAccountWithID:(id)a3;
- (id)activeAccountBundleIDs;
- (void)handleURLString:(id)a0;
- (void)addPendingAccountSetup;
- (id)changeHistoryClerkWithDBHelper:(id)a0;
- (void)saveAndReleaseAgents;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (void)_registerForCTDataUsageNotificaiton;
- (id)_accountInfoPath;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (id)accountsProviderWithDBHelper:(id)a0;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)addPersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (id)accountWithAccountID:(id)a0;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (BOOL)startMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)registerForBuddy;
- (void)_deviceDidWake;
- (void)disableActiveSync;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (unsigned long long)disableMonitoringAgents;
- (BOOL)hasEASAccountConfigured;
- (void).cxx_destruct;
- (void)_calDaysToSyncDidChange;
- (void)_stopMonitoringAndSaveAgents;
- (BOOL)hasActiveAccounts;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (void)_deviceWillSleep;
- (void)enableActiveSync;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (id)agentWithAccountID:(id)a0;
- (void)_clearOrphanedStores;
- (BOOL)removePersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (BOOL)clearPersistMonitoringAccountID:(id)a0 clientID:(id)a1;
- (BOOL)_systemMayNowBeReady;
- (BOOL)resetCertWarningsForAccountWithId:(id)a0 andDataclasses:(long long)a1;
- (void)loadAgents;
- (BOOL)resumeMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (id)stateString;
- (id)containerProviderWithDBHelper:(id)a0;
- (int)enqueueDisableMonitoringAgents:(id /* block */)a0;
- (BOOL)_clearOrphanedStoresInCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0 eventAccountIds:(id)a1;
- (BOOL)_clearOrphanedSubscribedCalendars:(void *)a0 eventAccountIds:(id)a1;
- (void)_loadAndStartMonitoringAgents;
- (void)_sendAccountAnalytics;
- (id)agentsToSyncForAccountID:(id)a0;
- (id)appleAccountsMatchingClass:(id)a0 errror:(id *)a1;
- (void)enqueueEnableMonitoringAgents:(int)a0 completion:(id /* block */)a1;
- (void)scheduleAgentStartOrStopBlock:(id /* block */)a0;

@end
