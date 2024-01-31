@class FBProcessExecutionContext, FBWatchdogTransitionContext, NSString, NSSet, FBSceneUpdateContext, BKSAnimationFenceHandle, RBSProcessHandle, BSProcessHandle, BSAnimationSettings;

@interface FBSSceneTransitionContext : FBSSettings <FBSSceneTransitionContext, NSCopying, NSMutableCopying, FBSMutableSettings>

@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (retain, nonatomic) FBProcessExecutionContext *executionContext;
@property (retain, nonatomic) RBSProcessHandle *clientProcessHandle;
@property (nonatomic) BOOL allowCPUThrottling;
@property (nonatomic, getter=isRunningBoardAssertionDisabled) BOOL runningBoardAssertionDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)_mutableClass;
+ (id)transitionContext;
+ (Class)subclassExtension;
+ (Class)_baseClass;

- (id)initWithSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)transientLocalClientSettings;

@end
