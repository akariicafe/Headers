@class UIImageView, UILabel, ARUIRingsView;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell

@property (retain, nonatomic) ARUIRingsView *ringsView;
@property (retain, nonatomic) UIImageView *ringImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *typeLabel;

+ (double)preferredHeightForActivityType:(id)a0 fittingWidth:(double)a1 plural:(BOOL)a2;
+ (double)preferredHeightForLocalizedName:(id)a0 fittingWidth:(double)a1;
+ (double)preferredHeightForWorkout:(id)a0 fittingWidth:(double)a1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configurePluralViewWithWorkoutActivityType:(id)a0;
- (void)configureWithWorkout:(id)a0;

@end
