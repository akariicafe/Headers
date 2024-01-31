@class NSArray, NSString, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable> {
    EFLocked *_visibleMailboxObjectIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibleMailboxesLock;
    _Atomic BOOL _isForeground;
    _Atomic BOOL _isRunningTests;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) BOOL isForeground;
@property (readonly) BOOL isRunningTests;
@property (readonly, copy) NSArray *visibleMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setStateForDemoMode:(id /* block */)a0;
- (void)exitDaemon;
- (void)setVisibleMailboxObjectIDs:(id)a0;
- (void)setIsForeground:(BOOL)a0;
- (void).cxx_destruct;
- (id)giveBoostWithCompletionBlock:(id /* block */)a0;
- (void)setIsRunningTests:(BOOL)a0;

@end
