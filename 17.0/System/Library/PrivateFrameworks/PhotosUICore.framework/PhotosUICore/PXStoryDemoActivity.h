@interface PXStoryDemoActivity : PXActivity

+ (long long)activityCategory;

- (id)activityType;
- (id)assets;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
