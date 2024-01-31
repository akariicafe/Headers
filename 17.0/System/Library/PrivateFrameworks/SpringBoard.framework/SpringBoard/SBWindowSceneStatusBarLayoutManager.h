@class NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, SBWindowScene;
@protocol BSInvalidatable;

@interface SBWindowSceneStatusBarLayoutManager : NSObject <BSDescriptionProviding> {
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    double _defaultWindowLevel;
    SBWindowScene *_windowScene;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } statusBarEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)setWindowLevel:(double)a0 forOverrideReason:(id)a1;
- (void)addActiveLayoutLayer:(unsigned long long)a0;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;
- (id)orientationWindowForLayoutLayer:(unsigned long long)a0;
- (void)setDefaultWindowLevel:(double)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_applyEdgeInsetsToStatusBar;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)statusBarOrientationShouldFollowWindow:(id)a0;
- (void)removeWindowLevelOverrideReason:(id)a0;
- (void)setOrientationWindow:(id)a0 forStatusBarLayoutLayer:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_updateWindowLevel;
- (void)removeActiveLayoutLayer:(unsigned long long)a0;
- (id)succinctDescription;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forLayoutLayer:(unsigned long long)a1;

@end
