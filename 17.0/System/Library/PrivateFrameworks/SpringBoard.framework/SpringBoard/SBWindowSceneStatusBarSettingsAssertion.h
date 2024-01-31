@class NSString, SBWindowSceneStatusBarAssertionManager, SBStatusBarSettings, NSDate;

@interface SBWindowSceneStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, SBWindowSceneStatusBarAssertion>

@property (readonly, weak, nonatomic) SBWindowSceneStatusBarAssertionManager *assertionManager;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, copy, nonatomic) SBStatusBarSettings *settings;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *reason;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)acquire;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)invalidateWithAnimationParameters:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)modifySettingsWithBlock:(id /* block */)a0 animationParameters:(id)a1;
- (void).cxx_destruct;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)a0 statusBarHidden:(BOOL)a1 atLevel:(unsigned long long)a2 reason:(id)a3;
- (id)succinctDescription;
- (void)acquireWithAnimationParameters:(id)a0;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)a0 settings:(id)a1 atLevel:(unsigned long long)a2 reason:(id)a3;
- (void)modifySettingsWithBlock:(id /* block */)a0;

@end
