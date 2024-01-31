@protocol EMRemoteConnectionRecoveryAssertionDelegate;

@interface EMRemoteConnectionRecoveryAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<EMRemoteConnectionRecoveryAssertionDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
