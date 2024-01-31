@class SBUISystemApertureAnimationParameters;

@interface SBUISystemApertureSceneResizeAction : BSAction

@property (readonly, nonatomic) SBUISystemApertureAnimationParameters *animationParameters;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, nonatomic, getter=isTransientLocal) BOOL transientLocal;

+ (id)sceneResizeActionWithAnimationParameters:(id)a0;
+ (id)transientLocalResizeSceneActionWithAnimationParameters:(id)a0;
+ (id)userInitiatedSceneResizeActionWithAnimationParameters:(id)a0;

- (void).cxx_destruct;
- (id)initWithAnimationParameters:(id)a0;

@end
