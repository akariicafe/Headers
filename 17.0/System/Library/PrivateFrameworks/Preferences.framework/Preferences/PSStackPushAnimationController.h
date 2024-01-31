@class UINavigationController, NSArray, NSString, NSMutableArray;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    BOOL _hasStartedAnimation;
}

@property (retain, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long animationPreset;
@property (nonatomic) double startStagger;
@property (nonatomic) double completionStagger;
@property (nonatomic) double pushDuration;
@property (nonatomic) double springDamping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_snapshotOfViewController:(id)a0 withNavigationBar:(id)a1 prevViewController:(id)a2;
+ (void)resetDefaultAnimationParameters;
+ (id)_animationParametersForPreset:(long long)a0;
+ (id)controllerWithViewControllerStack:(id)a0 navigationController:(id)a1;
+ (void)setDefaultAnimationPreset:(long long)a0;

- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (double)_actualDuration;
- (void)_addAnimation:(id /* block */)a0 forViewAtIndex:(unsigned long long)a1 count:(unsigned long long)a2;
- (double)_desiredDuration;
- (void)_loadDefaultValues;
- (BOOL)_shouldSkipFirstPush;
- (id)_valueForAnimationParameter:(id)a0;
- (void)animateAlongsideToViewController:(id /* block */)a0;

@end
