@class NSObject;
@protocol OS_xpc_object;

@interface CFPDObserverOnlyTombstone : NSObject {
    struct __CFString { } *_domain;
    struct __CFString { } *_userOrContainer;
    union { NSObject<OS_xpc_object> *_single; struct __CFSet *_multiple; } _observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observingConnectionsLock;
    unsigned short _shmemIndex;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)alreadyLocked_transferObservingConnectionsFromSource:(id)a0;
- (id)initMatchingSource:(id)a0;
- (void)removeObservingConnection:(id)a0 daemon:(id)a1;
- (void)transferObservingConnectionsToSource:(id)a0;

@end
