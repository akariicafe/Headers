@class NSArray, UIView;

@interface SBUISystemApertureLayoutGuide : UILayoutGuide {
    UIView *_currentRootGuideView;
}

@property (copy, nonatomic) NSArray *constraints;

+ (void)_addUnpreparedLayoutGuide:(id)a0;
+ (void)_enumerateSystemApertureRootLayoutGuidesForViewController:(id)a0 usingBlock:(id /* block */)a1;
+ (void)_enumerateUnpreparedSystemApertureLayoutGuides:(id /* block */)a0;
+ (void)_removeUnpreparedLayoutGuideIfNeeded:(id)a0;
+ (BOOL)prepareLayoutGuidesForViewControllerIfNeeded:(id)a0 onlyIfEmpty:(BOOL)a1;

- (void).cxx_destruct;
- (void)prepareIfNeeded;
- (BOOL)_requiresInsets;
- (void)_activateConstraintsWithRootLayoutGuide;
- (BOOL)_createOrUpdateConcentricRootLayoutGuideWithWindow:(id)a0;
- (BOOL)_createOrUpdateConstraintsIfIsRootAndInAWindow;
- (BOOL)_createOrUpdateFixedFrameRootConstraintsWithWindow:(id)a0;
- (BOOL)_createOrUpdateInsetBasedRootGuideWithWindow:(id)a0;
- (BOOL)_requiresExplicitFrame;
- (BOOL)_requiresFloatableFixedSize;
- (BOOL)_requiresInitialSetup;
- (id)_rootGuide;
- (id)_rootGuideView;
- (void)activateConstraintsIfNeeded;
- (BOOL)constraintNeedsActivation:(id)a0;

@end
