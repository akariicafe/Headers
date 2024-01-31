@class NSString, BSCompoundAssertion, BSProcessDeathWatcher;

@interface BKHIDClientConnection : NSObject <BSInvalidatable> {
    struct __IOHIDEventSystemConnection { } *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSCompoundAssertion *_observerAssertion;
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
}

@property (retain, nonatomic) BSProcessDeathWatcher *processDeathWatcher;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithConnection:(struct __IOHIDEventSystemConnection { } *)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(struct __IOHIDEventSystemConnection { } *)a0;
- (struct __IOHIDEventSystemConnection { } *)connection;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)addDisconnectionObserverBlock:(id /* block */)a0;

@end
