@interface PUHideActivity : PXActivity {
    BOOL _hiding;
}

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)setItemSourceController:(id)a0;

@end
