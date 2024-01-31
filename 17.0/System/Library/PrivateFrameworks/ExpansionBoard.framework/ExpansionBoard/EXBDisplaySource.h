@class FBSDisplayIdentity, NSString, NSSet, FBSDisplayConfiguration, NSMutableSet, FBDisplayManager;

@interface EXBDisplaySource : NSObject <FBSDisplayObserving, EXBDisplaySourcing> {
    FBDisplayManager *_displayManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) NSSet *connectedIdentities;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (id)configurationForIdentity:(id)a0;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)addObserver:(id)a0;
- (void)updateTransformsWithCompletion:(id /* block */)a0;
- (id)initWithDisplayManager:(id)a0;

@end
