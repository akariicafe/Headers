@class NSString;

@interface PUSuggestLessPersonActivity : PXActivity {
    NSString *_cachedImageName;
}

+ (long long)activityCategory;
+ (long long)_activityStyle;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_personFromFace:(id)a0;
- (id)_facesInCurrentAsset;

@end
