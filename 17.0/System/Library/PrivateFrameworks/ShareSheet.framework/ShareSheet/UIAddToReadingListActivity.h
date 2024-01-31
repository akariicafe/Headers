@interface UIAddToReadingListActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)_addToReadingList:(id)a0 withTitle:(id)a1;
- (id)_heroActionTitle;
- (BOOL)_showsInSystemActionGroup;

@end
