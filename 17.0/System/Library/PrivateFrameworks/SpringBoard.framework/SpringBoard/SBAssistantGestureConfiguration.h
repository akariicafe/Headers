@class SiriPresentationSpringBoardMainScreenViewController, NSString, NSHashTable;

@interface SBAssistantGestureConfiguration : NSObject <SBAssistantGestureConfigurationObserving>

@property (readonly, nonatomic) SiriPresentationSpringBoardMainScreenViewController *siriPresentationViewController;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL siriWantsToShowHomeAffordance;
@property (nonatomic) long long siriWantsHomeAffordanceSuppression;
@property (readonly, nonatomic) BOOL shouldDismissForSwipesOutsideContent;
@property (readonly, nonatomic) BOOL shouldDismissForTapsOutsideContent;
@property (readonly, nonatomic) BOOL shouldShareHomeGesture;
@property (readonly, nonatomic) BOOL shouldPassTouchesThroughToSpringBoard;
@property (readonly, nonatomic) BOOL shouldShowHomeAffordance;
@property (readonly, nonatomic) long long homeAffordanceSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_makeObserversPerformBlock:(id /* block */)a0;
- (void)assistantGestureConfiguration:(id)a0 didUpdateHomeAffordanceSuppression:(long long)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateHomeGestureSharing:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldDismissForTapsOutsideContent:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)a1;
- (void)assistantGestureConfiguration:(id)a0 didUpdateShouldShowHomeAffordance:(BOOL)a1;
- (id)initWithSiriPresentationViewController:(id)a0;
- (void)shouldDismissForGestureAtLocation:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
