@class FBSDisplayIdentity, NSArray, NSString, NSMutableDictionary, NSHashTable;
@protocol EXBDisplayMonitorDelegate, EXBDisplaySourcing;

@interface EXBDisplayMonitor : NSObject <EXBDisplayTransformUpdating, EXBDisplaySourceObserving> {
    id<EXBDisplaySourcing> _displayManager;
    NSMutableDictionary *_connectedIdentityToRecordMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
}

@property (readonly, copy, nonatomic) NSArray *connectedIdentities;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EXBDisplayMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)dealloc;
- (void)_connectToIdentity:(id)a0 withConfiguration:(id)a1 forDisplayManagerInit:(BOOL)a2;
- (id)configurationForIdentity:(id)a0;
- (void).cxx_destruct;
- (id)addObserver:(id)a0;
- (void)updateTransformsWithCompletion:(id /* block */)a0;
- (void)beginMonitoringForExternalDisplays;
- (void)displaySource:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displaySource:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displaySource:(id)a0 willDisconnectIdentity:(id)a1;
- (id)initWithDisplaySource:(id)a0;

@end
