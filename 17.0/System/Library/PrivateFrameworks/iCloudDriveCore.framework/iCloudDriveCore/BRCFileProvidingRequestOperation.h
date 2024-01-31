@class NSError, NSString, NSSet, BRCDocumentItem, NSMutableArray, NSMutableSet, BRCXPCClient, BRCAccountSessionFPFS;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass> {
    NSString *_etagIfLoser;
    NSString *_stageFileName;
    BRCAccountSessionFPFS *_session;
    BRCXPCClient *_client;
    NSMutableSet *_trackerFileObjects;
    NSMutableSet *_appLibrariesMonitored;
    BRCDocumentItem *_documentItem;
    NSSet *_trackedVersionsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
}

@property (readonly, nonatomic) NSSet *trackedFileObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void)_provideDocument:(id)a0;
- (void)_provideItem;
- (void)addCompletionCallback:(id /* block */)a0;
- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2 etagIfLoser:(id)a3 stageFileName:(id)a4;
- (id)initWithName:(id)a0 session:(id)a1;

@end
