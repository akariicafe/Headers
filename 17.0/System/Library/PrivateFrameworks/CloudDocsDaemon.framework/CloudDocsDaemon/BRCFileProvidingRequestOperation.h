@class NSURL, BRCAccountSession, NSMutableArray, BRCTreeEnumerator, BRCDirectoryItem, NSString, NSSet, BRCListDirectoryContentsOperation, BRCDocumentItem, BRCRecursiveListDirectoryContentsOperation, NSMutableSet, BRCXPCClient, NSError;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass> {
    BOOL _isRecursive;
    BOOL _wantsCurrentVersion;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    BOOL _isStillEnumeratingDirectory;
    BRCListDirectoryContentsOperation *_listOp;
    BRCRecursiveListDirectoryContentsOperation *_recursiveList;
    BRCAccountSession *_session;
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

@property (nonatomic) BOOL isRecursive;
@property (nonatomic) BOOL wantsCurrentVersion;
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
- (void)_provideFlatDirectoryStructure:(id)a0;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void)_provideDirectoryContents:(id)a0 appLibrary:(id)a1;
- (void)_provideDirectoryRecursively:(id)a0;
- (void)_provideDocument:(id)a0;
- (void)_provideItem;
- (void)_provideURL;
- (void)addCompletionCallback:(id /* block */)a0;
- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (id)initWithDirectoryItem:(id)a0;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2;
- (id)initWithName:(id)a0 session:(id)a1 readingOptions:(unsigned long long)a2;
- (id)initWithURL:(id)a0 readingOptions:(unsigned long long)a1 client:(id)a2 session:(id)a3;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;

@end
