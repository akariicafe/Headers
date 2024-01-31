@class NSObject, NSArray, NSString, SLHighlightCenter, NSCache;
@protocol OS_dispatch_queue;

@interface SLDCloudDocsService : SLDRemoteRenderingService <SLDService, SLDCloudDocsServiceProtocol, SLHighlightCenterDelegate>

@property (retain, nonatomic) SLHighlightCenter *highlightCenter;
@property (retain, nonatomic) NSArray *highlights;
@property (retain, nonatomic) NSCache *urlToCollaborationHighlightCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudDocsAccessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;

- (id)init;
- (void).cxx_destruct;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)getCollaborationHighlightForShareURL:(id)a0 fileURL:(id)a1 sandboxTokenData:(id)a2 reply:(id /* block */)a3;
- (void)prepareConnectionWithReply:(id /* block */)a0;
- (void)shareURLForFileURL:(id)a0 sandboxTokenData:(id)a1 reply:(id /* block */)a2;
- (void)fetchHighlights;
- (unsigned long long)_acquireSandboxHandleData:(id)a0 ForFileProviderDocumentURL:(id)a1 clientConnection:(id)a2 error:(id *)a3;
- (BOOL)_connection:(id)a0 hasPermissionForFileURL:(id)a1;
- (BOOL)_fileURLHasFileProvider:(id)a0 error:(id *)a1;
- (void)_releaseSandboxHandle:(unsigned long long)a0;
- (void)generateURLToCollaborationHighlightCache;
- (void)highlightCenterDidAddHighlights:(id)a0;

@end
