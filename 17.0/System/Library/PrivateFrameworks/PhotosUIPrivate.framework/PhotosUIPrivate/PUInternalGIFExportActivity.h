@interface PUInternalGIFExportActivity : PXActivity

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)_asset;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
