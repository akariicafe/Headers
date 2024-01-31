@class NSTimer, NSMapTable;

@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironments;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (id)init;
- (BOOL)isEnvironmentLocked:(id)a0;
- (id)description;
- (BOOL)unlockEnvironmentTree:(id)a0;
- (void).cxx_destruct;
- (void)lockEnvironmentTree:(id)a0;
- (void)_validateLockedEnvironments;

@end
