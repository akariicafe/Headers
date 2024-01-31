@class BSServiceSpecification, NSMutableDictionary, BSZeroingWeakReference, BSServiceDomainSpecification, NSMutableArray;

@interface BSService : NSObject {
    BSServiceSpecification *_specification;
    BSServiceDomainSpecification *_domainSpecification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
    BOOL _lock_invalidated;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
