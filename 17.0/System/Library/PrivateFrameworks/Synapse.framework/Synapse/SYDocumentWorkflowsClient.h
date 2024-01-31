@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDocumentWorkflowsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;

+ (id)_createUnableToPerformRequestErrorWithCode:(long long)a0;
+ (BOOL)_verifyFeatureFlagWithError:(id *)a0;

- (void)_invalidateConnection;
- (id)init;
- (void)_createConnectionIfNecessary;
- (void)dealloc;
- (void)performRequest:(id)a0 completion:(id /* block */)a1;
- (void)performRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_dispatchRequestWithCompletion:(id /* block */)a0;
- (void)canPerformRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformRequest:(id)a0 withError:(id *)a1;
- (void)fetchAttributesForDocumentsWithIndexKeys:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserActivityForDocumentIndexKey:(id)a0 completion:(id /* block */)a1;
- (void)hasLastModifiedDocumentForFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)hasLastModifiedDocumentForFileWithDocumentAttributes:(id)a0 completion:(id /* block */)a1;
- (void)hasOriginalDocumentForFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)hasOriginalDocumentForFileWithDocumentAttributes:(id)a0 completion:(id /* block */)a1;
- (void)openLastModifiedDocumentForFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)openLastModifiedDocumentForFileWithDocumentAttributes:(id)a0 completion:(id /* block */)a1;
- (void)openOriginalDocumentForFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)openOriginalDocumentForFileWithDocumentAttributes:(id)a0 completion:(id /* block */)a1;
- (void)performRequest:(id)a0 withErrorHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)saveUserActivity:(id)a0 forDocumentIndexKey:(id)a1 sourceBundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)unlinkDocumentsWithRelatedUniqueidentifiers:(id)a0 completion:(id /* block */)a1;
- (void)updateLinkedDocumentsWithCompletion:(id /* block */)a0;

@end
