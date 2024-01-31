@interface DMMigrationDeferredExitManager : NSObject

+ (id)_serialQueue;

- (void)migrationDidEnd;
- (id)_deferralDuration;
- (void)_exitClean;
- (BOOL)_isDeferringExit;
- (void)_resetGlobalState;
- (void)cancelDeferredExitWithConnection:(id)a0;
- (void)deferExitWithConnection:(id)a0;
- (void)migrationDidStart;

@end
