@class BSSettings, UIApplicationSceneTransitionContext;

@interface SBSystemApertureSceneElementTransitionParameters : NSObject

@property (nonatomic) BOOL shouldSetForeground;
@property (nonatomic) struct CGSize { double width; double height; } sceneSize;
@property (nonatomic) BOOL wantsForeground;
@property (retain, nonatomic) UIApplicationSceneTransitionContext *transitionContext;
@property (copy, nonatomic) BSSettings *otherSystemApertureSceneSettingsToApply;

- (void).cxx_destruct;

@end
