@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}

@property (readonly, nonatomic) AnalyticsWorkspace *workspace;
@property (weak, nonatomic) id<ABCPersistentStoreControllerDelegate> delegate;

- (id)workspace;
- (void)save:(BOOL)a0;
- (void)shutdown;
- (id)init;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)uploadRecordAnalytics;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (void)cleanupUploadRecord;
- (void)cleanupDiagnosticCaseUsage;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (id)initWithDirectory:(id)a0;
- (void)removeCaseStorageWithID:(id)a0;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (void)cleanupDiagnosticCaseStorage;
- (id)caseSummaryAnalytics;
- (void)cleanupDiagnosticCaseSummary;
- (id)caseStorageAnalytics;
- (void)save;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void).cxx_destruct;
- (void)removeAllCaseStorages;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (id)caseUsageAnalytics;

@end
