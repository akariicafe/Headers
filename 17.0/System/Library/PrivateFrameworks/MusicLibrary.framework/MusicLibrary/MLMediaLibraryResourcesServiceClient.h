@class NSString, NSXPCConnection, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver;

@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol>

@property (class, readonly, nonatomic) MLMediaLibraryResourcesServiceClient *sharedService;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSXPCConnection *xpcClientConnection;
@property (retain, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void).cxx_destruct;
- (id)_initWithAccountChangeObserver:(id)a0;
- (id)_libraryContainerPathWithError:(id *)a0;
- (id)connectionWithListenerEndpoint:(id)a0;
- (id)_musicContainerPathWithError:(id *)a0;
- (void)_performOnServerObjectWithMaxRetries:(long long)a0 error:(id *)a1 remoteObjectBlock:(id /* block */)a2;
- (id)libraryContainerPathWithError:(id *)a0;
- (id)musicContainerPathWithError:(id *)a0;

@end
