@class NSSet, EDVIPManager, NSString, NSMapTable;

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSMapTable *_observersByIdentifier;
}

@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, copy, nonatomic) NSSet *allVIPWaitForResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_vipsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)saveVIPs:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (void)cancelObservation:(id)a0;
- (void)registerObserver:(id)a0 observationIdentifier:(id)a1;
- (id)initWithVIPManager:(id)a0;

@end
