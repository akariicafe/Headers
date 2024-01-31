@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, SDRDiagnosticReporterDelegate;

@interface SDRDiagnosticReporter : NSObject {
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SDRDiagnosticReporterDelegate> delegate;

+ (void)initialize;
+ (BOOL)isABCEnabled;

- (id)initWithQueue:(id)a0;
- (BOOL)addSignatureContentForSession:(id)a0 key:(id)a1 content:(id)a2 reply:(id /* block */)a3;
- (id)init;
- (BOOL)getDiagnosticPayloadsForSignatures:(id)a0 reply:(id /* block */)a1;
- (void)caseSummariesListCallbackWithResult:(id)a0 service:(id)a1 caseSummaryType:(id)a2 count:(unsigned long long)a3 container:(id)a4 reply:(id /* block */)a5;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)getDiagnosticCaseSummariesOfType:(id)a0 reply:(id /* block */)a1;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(BOOL)a4 reply:(id /* block */)a5;
- (BOOL)addToSession:(id)a0 event:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (BOOL)isSignatureValid:(id)a0;
- (void)setupXPCInterface;
- (BOOL)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 originatingProcess:(id)a3 triggerThreshold:(id)a4;
- (void)getAllDiagnosticCasesWithReply:(id /* block */)a0;
- (BOOL)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (BOOL)groupCaseIdentifierForSignature:(id)a0 reply:(id /* block */)a1;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(BOOL)a4 reply:(id /* block */)a5;
- (BOOL)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (BOOL)snapshotWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 delay:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 detectedProcess:(id)a3 triggerThresholdValues:(id)a4;
- (void)getAutoBugCaptureConfiguration:(id /* block */)a0;
- (BOOL)addToSession:(id)a0 events:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 event:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (BOOL)snapshotWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 duration:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (BOOL)snapshotWithSignature:(id)a0 delay:(double)a1 events:(id)a2 payload:(id)a3 wantsRemoteCase:(BOOL)a4 reply:(id /* block */)a5;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 payload:(id)a2 reply:(id /* block */)a3;
- (void)getDiagnosticCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)casesListCallbackWithResult:(id)a0 service:(id)a1 identifier:(id)a2 count:(unsigned long long)a3 container:(id)a4 reply:(id /* block */)a5;
- (BOOL)startSessionWithSignature:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2 duration:(double)a3 events:(id)a4 payload:(id)a5 actions:(id)a6 reply:(id /* block */)a7;
- (BOOL)endSession:(id)a0;
- (BOOL)triggerRemoteSessionForSignature:(id)a0 caseGroupID:(id)a1 reply:(id /* block */)a2;
- (id)actionsDictionary:(id)a0 withIDSDestinations:(id)a1 validFor:(double)a2;
- (BOOL)snapshotWithSignature:(id)a0 duration:(double)a1 event:(id)a2 payload:(id)a3 reply:(id /* block */)a4;
- (id)signatureWithDomain:(id)a0 type:(id)a1 subType:(id)a2 subtypeContext:(id)a3 detectedProcess:(id)a4 triggerThresholdValues:(id)a5;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 payload:(id)a2 reply:(id /* block */)a3;
- (BOOL)startSessionWithSignature:(id)a0 duration:(double)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (BOOL)cancelSession:(id)a0;
- (id)_payloadAugmentedWithSandboxExtensionTokensDict:(id)a0;

@end
