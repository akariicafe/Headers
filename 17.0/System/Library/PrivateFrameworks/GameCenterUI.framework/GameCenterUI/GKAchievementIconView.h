@class GKAchievement;

@interface GKAchievementIconView : UIImageView

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) BOOL isDetail;

+ (id)progressSource;
+ (id)progressSourceDetail;

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureImage;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)a0 withHandler:(id /* block */)a1;
- (id)processProgressImage:(id)a0 forAchievement:(id)a1;
- (double)progressForAchievement:(id)a0;
- (id)progressIdentifierForAchievement:(id)a0;
- (void)setupForAchievement:(id)a0 localAchievement:(id)a1;

@end
