@class NSString, NSDictionary, BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSMutableArray;

@interface BSServiceDomain : NSObject {
    BSServiceDomainSpecification *_specification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSXPCServiceConnectionListener *_xpcListener;
    NSString *_listenerEndpointDescription;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
    unsigned long long _lock_activations;
    BOOL _lock_deactivating;
    BOOL _lock_invalidated;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;

@end
