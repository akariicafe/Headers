@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface ESDConnection : NSObject {
    NSObject<OS_xpc_object> *_connExchange;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    id /* block */ _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
}

@property (nonatomic) BOOL registered;

+ (unsigned long long)_nextStopMonitoringStatusToken;
+ (id)sharedConnection;

- (id)performCalendarDirectorySearchWithAccountID:(id)a0 terms:(id)a1 recordTypes:(id)a2 resultLimit:(unsigned long long)a3 resultsBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (BOOL)resumeWatchingFoldersWithKeys:(id)a0 forAccountID:(id)a1;
- (void)_calendarAvailabilityRequestFinished:(id)a0;
- (id)init;
- (void)_downloadProgress:(id)a0;
- (void)dealloc;
- (id)statusReports;
- (BOOL)stopWatchingFoldersWithKeys:(id)a0 forAccountID:(id)a1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2 forAccountID:(id)a3;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclass:(long long)a1 isUserRequested:(BOOL)a2;
- (void)_logDataAccessStatus:(id)a0;
- (void)_registerForAppResumedNotification;
- (id)_init;
- (void)_cancelDownloadsWithIDs:(id)a0 error:(id)a1;
- (void)_resetCertWarningsForAccountId:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (void)reportFolderItemsSyncSuccess:(BOOL)a0 forFolderWithID:(id)a1 withItemsCount:(unsigned long long)a2 andAccountWithID:(id)a3;
- (void)_downloadFinished:(id)a0;
- (id)_createReplyToRequest:(id)a0 withProperties:(id)a1;
- (void)_serverDiedWithReason:(id)a0;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclass:(long long)a2 isUserRequested:(BOOL)a3;
- (void)_getStatusReportsFromClient:(id)a0;
- (void)_calendarDirectorySearchReturnedResults:(id)a0;
- (BOOL)watchFoldersWithKeys:(id)a0 forAccountID:(id)a1;
- (void)_resetThrottleTimersForAccountId:(id)a0;
- (void)_exchangeServerDiedWithReason:(id)a0;
- (BOOL)processMeetingRequests:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4;
- (void)cancelCalendarDirectorySearchWithID:(id)a0;
- (void)resetTimersAndWarnings;
- (BOOL)retrieveOofSettingsRequest:(id)a0 forAccountWithID:(id)a1;
- (void)requestDaemonShutdown;
- (void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)a0;
- (BOOL)_performOofSettingsRequest:(id)a0 forAccountWithID:(id)a1 forUpdate:(BOOL)a2;
- (void)_initializeXPCConnection:(id)a0;
- (BOOL)updateOofSettingsRequest:(id)a0 forAccountWithID:(id)a1;
- (void)_sendSynchronousXPCMessageWithParameters:(id)a0 handlerBlock:(id /* block */)a1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)a0;
- (id)requestCalendarAvailabilityWithAccountID:(id)a0 startDate:(id)a1 endDate:(id)a2 ignoredEventID:(id)a3 addresses:(id)a4 resultsBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (id)currentPolicyKeyForAccountID:(id)a0;
- (unsigned long long)requestDaemonStopMonitoringAgents;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (id)_connectionForExchange;
- (void)respondToSharedCalendarInvite:(long long)a0 forCalendarWithID:(id)a1 accountID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)registerForInterrogationWithBlock:(id /* block */)a0;
- (BOOL)requestPolicyUpdateForAccountID:(id)a0;
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)a0;
- (BOOL)performServerContactsSearch:(id)a0 forAccountWithID:(id)a1;
- (BOOL)processFolderChange:(id)a0 forAccountWithID:(id)a1;
- (id)decodedErrorFromData:(id)a0;
- (void)handleURL:(id)a0;
- (void)_serverContactsSearchQueryFinished:(id)a0;
- (void)_calendarDirectorySearchFinished:(id)a0;
- (void)_initializeConnectionWithXPCEndpoint:(id)a0;
- (BOOL)suspendWatchingFoldersWithKeys:(id)a0 forAccountID:(id)a1;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1;
- (void)_foldersUpdated:(id)a0;
- (void)_initializeXPCConnectionForExchange:(id)a0;
- (void)fillOutCurrentEASTimeZoneInfo;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclass:(long long)a2;
- (void).cxx_destruct;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)a0 error:(id)a1;
- (BOOL)_validateXPCReply:(id)a0;
- (id)activeSyncDeviceIdentifier;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (void)cancelServerContactsSearch:(id)a0;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (BOOL)watchFoldersWithKeys:(id)a0 forAccountID:(id)a1 persistent:(BOOL)a2;
- (void)_initializeExchangeConnection;
- (void)externalIdentificationForAccountID:(id)a0 resultsBlock:(id /* block */)a1;
- (void)_dispatchMessage:(id)a0;
- (void)_shareResponseFinished:(id)a0;
- (id)beginDownloadingAttachmentWithUUID:(id)a0 accountID:(id)a1 queue:(id)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)a0 accountID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)isOofSettingsSupportedForAccountWithID:(id)a0 completionBlock:(id /* block */)a1;
- (void)reallyRegisterForInterrogation;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)a0 withToken:(unsigned long long)a1 waitForReply:(BOOL)a2;
- (void)_tearDownInFlightObjects;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclass:(long long)a1;
- (void)asyncProcessMeetingRequests:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4;
- (void)_policyKeyChanged:(id)a0;
- (void)_oofSettingsRequestsFinished:(id)a0;
- (unsigned long long)requestDaemonStopMonitoringAgentsSync;
- (void)cancelCalendarAvailabilityRequestWithID:(id)a0;
- (void)_folderChangeFinished:(id)a0;

@end
