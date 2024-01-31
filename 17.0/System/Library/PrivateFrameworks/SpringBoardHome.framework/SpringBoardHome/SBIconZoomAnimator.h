@class SBHIconZoomSettings, NSSet, NSString, NSMapTable, SBIconListModel, SBIconListView, SBHIconModel;
@protocol SBIconZoomAnimationContaining;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    SBIconListModel *_iconListModel;
    SBHIconModel *_iconModel;
    double _startTime;
}

@property (readonly, nonatomic) id<SBIconZoomAnimationContaining> animationContainer;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic) SBIconListView *dockListView;
@property (retain, nonatomic) NSSet *criticalIconNodeIdentifiers;
@property (readonly, nonatomic) double startTime;
@property (retain, nonatomic) SBHIconZoomSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)dealloc;
- (void)_prepareAnimation;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)a0;
- (id)initWithAnimationContainer:(id)a0;
- (void)_iconModelDidReload:(id)a0;
- (void)_setIconListView:(id)a0;
- (void)_clearObservers;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)_applyLabelAlphaFraction:(double)a0;
- (void)_setDockListView:(id)a0;
- (void)enumerateIconsAndIconViewsWithHandler:(id /* block */)a0;
- (BOOL)isPastPointOfNoReturn;
- (id)iconViewForIcon:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)_setAnimationFraction:(double)a0;
- (void)_iconModelDidRelayout:(id)a0;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (unsigned long long)dockIconCount;
- (unsigned long long)listIconCount;
- (void)cleanupZoom;
- (void)nodeDidMoveContainedNodes:(id)a0;

@end
