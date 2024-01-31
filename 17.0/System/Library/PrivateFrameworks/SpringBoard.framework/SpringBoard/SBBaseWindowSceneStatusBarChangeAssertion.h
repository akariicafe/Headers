@class NSString, SBWindowSceneStatusBarAssertionManager;

@interface SBBaseWindowSceneStatusBarChangeAssertion : NSObject <SBWindowSceneStatusBarAssertion> {
    SBWindowSceneStatusBarAssertionManager *_assertionManager;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)a0 reason:(id)a1;

@end
