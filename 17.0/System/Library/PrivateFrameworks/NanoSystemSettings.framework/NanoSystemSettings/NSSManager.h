@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NSSManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)cannotUseNSSError;
+ (void)displayAirplaneModeMirroringUserEducationAlert:(BOOL)a0;
+ (void)displayAlertFailedRemoteAirplaneMode:(BOOL)a0;
+ (void)displayAlertWithTitle:(id)a0 body:(id)a1 icon:(id)a2;

- (id)protocol;
- (void)setDeviceName:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)rebootDevice;
- (void)invalidate;
- (id)connection;
- (void).cxx_destruct;
- (void)unsafe_invalidate;
- (void)enableAirplaneMode:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getFullProfileInfoWithIdentifier:(id)a0 includeManagedPayloads:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getProfilesInfo:(id /* block */)a0;
- (void)installProfile:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getiCloudInfo:(id /* block */)a0;
- (void)getLocalesInfo:(id /* block */)a0;
- (void)_updateBetaEnrollmentStatus:(id)a0 requiresUnenroll:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)cancelDiagnosticLogTranfer:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelFileTransfersInProgress;
- (void)deleteDiagnosticLogFile:(id)a0 withResult:(id /* block */)a1;
- (void)fetchBetaEnrollmentStatus:(id /* block */)a0;
- (BOOL)fileTransferInProgress:(id)a0;
- (void)getAboutInfo:(id /* block */)a0;
- (void)getAccountsInfo:(id /* block */)a0;
- (void)getAccountsInfoForAccountType:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDiagnosticLogFileFromGizmo:(id)a0 withResults:(id /* block */)a1;
- (void)getDiagnosticLogsInfo:(id /* block */)a0;
- (void)getDiagnosticLogsInfoByCateogry:(id /* block */)a0;
- (void)getLegalDocuments:(id /* block */)a0;
- (void)getProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getUsage:(id /* block */)a0;
- (void)getUsageData:(id /* block */)a0;
- (void)getWatchFaces:(id /* block */)a0;
- (void)obliterateGizmo:(id /* block */)a0;
- (void)obliterateGizmoPreservingeSIM:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)purgeUsageBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void)purgeUsageBundleWithId:(id)a0 completionHandler:(id /* block */)a1;
- (void)recordSoftwareUpdateSpaceFailure:(id)a0 osBeingUpdatedTo:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAirplaneModeSettingsWithCompletionHandler:(id /* block */)a0;
- (void)retrieveDiagnosticLogTransferProgress:(id)a0 withProgress:(id /* block */)a1;
- (void)setAirplaneModeSettings:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setSafetyXpcInterruptionHandlerBlock:(id /* block */)a0;
- (void)setWatchFaceIdentifier:(id)a0 forFocusModeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)unenrollFromBetaUpdatesWithCompletion:(id /* block */)a0;
- (void)updateBetaEnrollmentStatus:(id)a0 withCompletion:(id /* block */)a1;

@end
