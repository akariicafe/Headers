@protocol BDSServiceProtocol;

@interface BDSCloudSyncDiagnosticServiceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;

+ (id)sharedServiceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)clearSyncMetadata:(id /* block */)a0;
- (void)detachWithCompletionHandler:(id /* block */)a0;
- (void)diagnosticInfoWithCompletionHandler:(id /* block */)a0;
- (void)findLocalIdDupesWithCompletionHandler:(id /* block */)a0;
- (void)forceFetchRemoteChanges:(id /* block */)a0;

@end
