@class NRRegistry, NSUUID, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {
    NRDevice *_me;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_pairingID;
    NRRegistry *_registry;
    NSMutableDictionary *_oldPropertiesForChangeNotifications;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *pairingID;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (id)description;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsCapability:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)archived;
- (id)propertyNames;
- (void)addPropertyObserver:(id)a0 forPropertyChanges:(id)a1;
- (BOOL)canMigrate;
- (id)initWithRegistry:(id)a0 diff:(id)a1 pairingID:(id)a2 notify:(BOOL)a3;
- (BOOL)migrationConfirmed;
- (id)migrationError;
- (void)registerForPropertyChanges:(id)a0 withBlock:(id /* block */)a1;
- (void)removePropertyObserver:(id)a0 forPropertyChanges:(id)a1;
- (void)unregisterForPropertyChanges:(id)a0 withBlock:(id /* block */)a1;

@end
