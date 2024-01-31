@interface PUUISaveToCameraRollActivity : UISaveToCameraRollActivity

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_containsVideoComplementsInActivityItems:(id)a0 outVideoComplements:(id *)a1;

@end
