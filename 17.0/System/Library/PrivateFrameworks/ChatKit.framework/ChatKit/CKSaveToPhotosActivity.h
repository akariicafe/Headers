@class CKMediaObject, UIViewController;

@interface CKSaveToPhotosActivity : UIActivity

@property (readonly, nonatomic) CKMediaObject *mediaObject;
@property (readonly, weak, nonatomic) UIViewController *presenterViewController;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithMediaObject:(id)a0 presenterViewController:(id)a1;

@end
