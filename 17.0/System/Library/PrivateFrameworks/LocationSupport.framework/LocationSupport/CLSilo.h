@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)main;
+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;

- (void)async:(id /* block */)a0;
- (void)runResumeHandlers;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (void)assertInside;
- (void)unregisterForIdleNotifications:(id)a0;
- (BOOL)shouldBeIdled;
- (double)currentLatchedAbsoluteTimestamp;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)resume;
- (void)heartBeat:(id)a0;
- (void).cxx_destruct;
- (void)intendToSync;
- (id)debugDescription;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)runIdleHandlers;
- (id)newTimer;
- (BOOL)isSuspended;
- (void)sync:(id /* block */)a0;
- (void)assertOutside;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
