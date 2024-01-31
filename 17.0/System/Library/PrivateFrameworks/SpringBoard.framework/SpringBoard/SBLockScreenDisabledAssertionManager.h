@class NSString, NSMutableSet;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (id)init;
- (void)removeLockScreenDisableAssertion:(id)a0;
- (void)addLockScreenDisableAssertion:(id)a0;
- (BOOL)isLockScreenDisabledForAssertion;
- (void).cxx_destruct;

@end
