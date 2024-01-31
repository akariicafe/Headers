@class GDEntityResolutionInProcessTextClient;

@interface QPInProcessECRClient : QPECRClient {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    GDEntityResolutionInProcessTextClient *_client;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (BOOL)coolDownECRClientSyncWithError:(id *)a0;
- (id)ecrClientWithError:(id *)a0;
- (id)resolveEntitiesWithRequest:(id)a0 error:(id *)a1;
- (BOOL)warmUpECRClientSyncWithError:(id *)a0;

@end
