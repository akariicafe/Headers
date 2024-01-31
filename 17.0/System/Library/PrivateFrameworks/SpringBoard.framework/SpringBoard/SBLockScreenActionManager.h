@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (id)init;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)a0;
- (void)registerLockScreenActionProvider:(id)a0 forSource:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)currentLockScreenActionContext;
- (void)_clearActionOnAllProviders;
- (void)runUnlockAction;

@end
