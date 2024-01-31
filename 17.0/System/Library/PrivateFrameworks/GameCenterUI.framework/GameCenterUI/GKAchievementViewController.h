@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)notifyDelegateOnWillFinish;

@end
