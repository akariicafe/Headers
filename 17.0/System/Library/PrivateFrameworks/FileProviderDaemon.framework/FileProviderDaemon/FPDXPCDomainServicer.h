@class FPDExtensionSession, NSString, FPDServer, NSXPCConnection, FPDProvider, FPDXPCDomainServicerLifetimeExtender, NSObject, FPDDomain;
@protocol OS_os_log, OS_os_transaction, OS_dispatch_queue, FPProgressProtocol;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property (readonly, nonatomic) FPDDomain *domainOrNil;
@property (retain, nonatomic) id<FPProgressProtocol> uploadProxy;
@property (retain, nonatomic) id<FPProgressProtocol> downloadProxy;

- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithServer:(id)a0 providerDomainID:(id)a1 domain:(id)a2 connection:(id)a3;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingServiceWithName:(id)a0 itemID:(id)a1 completionHandler:(id /* block */)a2;
- (id)providerOrNil;
- (int)pid;
- (void)invalidate;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeToUploadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeToDownloadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)materializeItemWithIdentifier:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)setDomainEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_unregisterLifetimeExtension;
- (void).cxx_destruct;
- (void)stopExtendingLifetime;
- (id)__providerIfExists;
- (void)_registerLifetimeExtension;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)startExtendingLifetime;
- (id)newFileProviderProxy;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)runTestingOperations:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDiagnosticAttributesForItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;

@end
