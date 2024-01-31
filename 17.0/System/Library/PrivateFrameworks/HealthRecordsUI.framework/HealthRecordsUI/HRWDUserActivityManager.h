@class NSMutableDictionary, _HRWDActivityNode, NSMutableArray, UIViewController;

@interface HRWDUserActivityManager : NSObject {
    UIViewController *_rootViewController;
    _HRWDActivityNode *_topNode;
    _HRWDActivityNode *_currentNode;
    NSMutableDictionary *_indexedActivities;
}

@property (readonly, nonatomic) NSMutableArray *policies;
@property (nonatomic) BOOL recordActivities;

- (void)addPolicy:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)setRootViewController:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_castleRockSpotlightBreadcrumbs:(id)a0;
- (id)_handoffActivityBreadcrumbsForOnboarding:(id)a0;
- (id)_handoffActivityBreadcrumbsForSampleType:(id)a0;
- (void)_resetActivities;
- (BOOL)_restoreActivityFromPolicies:(id)a0;
- (void)_restoreFromActivityChain:(id)a0;
- (void)_setCurrentNodeToResponder:(id)a0;
- (void)_userActivityWithTitle:(id)a0 keywords:(id)a1 activityType:(id)a2;
- (id)_userActivityWithType:(id)a0;
- (void)changeActivityForResponder:(id)a0 activityDictionary:(id)a1 title:(id)a2 keywords:(id)a3;
- (void)restoreFromUserActivity:(id)a0;
- (void)transitionActivityForResponder:(id)a0 newResponder:(id)a1 transitionDictionary:(id)a2;

@end
