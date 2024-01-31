@interface PURemoveFromFeaturedPhotosActivity : PXActivity

+ (long long)activityCategory;
+ (long long)_activityStyle;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
