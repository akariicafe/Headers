@class UILabel, NSString, GKTimeScopeButton;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) GKTimeScopeButton *timeScopeButton;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long timeScope;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

+ (double)defaultHeight;

- (long long)timeScope;
- (id)title;
- (void)setTimeScope:(long long)a0;
- (void)setTitle:(id)a0;
- (void)awakeFromNib;
- (void)timeScopePressed:(id)a0;

@end
