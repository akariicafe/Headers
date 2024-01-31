@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)dealloc;
- (void)_sendCancellableOrPausableUpdate:(BOOL)a0 stringKey:(const char *)a1 intKey:(int)a2;
- (void)_setPausable:(BOOL)a0 fromChild:(BOOL)a1;
- (void)_setUserInfoValue:(id)a0 forKey:(id)a1 fromChild:(BOOL)a2;
- (void)setPausable:(BOOL)a0;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple { struct _NSProgressFraction { long long x0; long long x1; BOOL x2; } x0; struct _NSProgressFraction { long long x0; long long x1; BOOL x2; } x1; })a0;
- (void)setCancellable:(BOOL)a0;
- (void)_setCancellable:(BOOL)a0 fromChild:(BOOL)a1;

@end
