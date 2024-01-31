@interface SUIShareActivity : UIActivity

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (long long)_defaultSortGroup;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
- (BOOL)ss_shouldExecuteInShareSheet;

@end
