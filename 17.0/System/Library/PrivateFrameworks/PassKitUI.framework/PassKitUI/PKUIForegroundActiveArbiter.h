@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_source;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {
    BOOL _foreground;
    BOOL _enteringForeground;
    BOOL _enteringForegroundExpired;
    BOOL _active;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    unsigned int _deactivationReasons;
    NSHashTable *_observers;
    NSHashTable *_deactivationObservers;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_enteringForegroundTimeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isBackgroundedForReasons:(unsigned int)a0;
+ (BOOL)isDeactivedForReasons:(unsigned int)a0;

- (void)didBecomeActive;
- (void)willResignActive;
- (id)init;
- (void)dealloc;
- (struct { BOOL x0; BOOL x1; })registerObserver:(id)a0;
- (id)_init;
- (void)didEnterBackground;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)willTerminate;
- (void)unregisterDeactivationObserver:(id)a0;
- (void)_beginEnteringForegroundTimer;
- (void)_didRemoveDeactivationReasonNotification:(id)a0;
- (void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)a0;
- (void)_willAddDeactivationReasonNotification:(id)a0;
- (unsigned int)registerDeactivationObserver:(id)a0;
- (void)willEnterForegroundPostlude;
- (void)willEnterForegroundPrelude;

@end
