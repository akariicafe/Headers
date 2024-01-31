@class NSArray, _UIActivityUserDefaults;

@interface _UIUserDefaultsActivity : UIActivity

@property (readonly, nonatomic) _UIActivityUserDefaults *userDefaults;
@property (readonly, nonatomic) long long activityCategory;
@property (copy, nonatomic) NSArray *availableActivities;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (id)initWithUserDefaults:(id)a0 activityCategory:(long long)a1;

@end
