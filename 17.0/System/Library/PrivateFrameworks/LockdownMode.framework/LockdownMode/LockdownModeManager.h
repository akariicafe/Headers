@class LockdownModeManagerInternal;

@interface LockdownModeManager : NSObject

@property (readonly) LockdownModeManagerInternal *underlyingObject;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL enabledInAccount;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)migrateIfNeededWithCompletion:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)getEnabledInAccount:(BOOL)a0 completion:(id /* block */)a1;
- (void)enableIfNeeded:(BOOL)a0 completion:(id /* block */)a1;
- (void)notifyRestrictionChanged:(id)a0;
- (void)rebootIfNeeded;

@end
