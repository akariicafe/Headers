@protocol HMDRemoteEventRouterClientActiveStateDelegate;

@interface HMDRemoteEventRouterAssertion : HMFObject <HMFCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<HMDRemoteEventRouterClientActiveStateDelegate> activeStateDelegate;
@property (nonatomic) BOOL isActive;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAssertionController:(id)a0;

@end
