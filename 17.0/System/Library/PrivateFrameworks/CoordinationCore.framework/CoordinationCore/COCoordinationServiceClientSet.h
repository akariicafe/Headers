@class NSMutableSet;

@interface COCoordinationServiceClientSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *clients;

- (id)init;
- (void).cxx_destruct;
- (id)serviceClients;
- (void)_withLock:(id /* block */)a0;
- (void)addServiceClient:(id)a0;
- (void)removeServiceClient:(id)a0;
- (id)serviceClientForXPCConnection:(id)a0;

@end
