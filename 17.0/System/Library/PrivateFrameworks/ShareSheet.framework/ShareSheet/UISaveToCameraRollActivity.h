@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;
@property (retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_canSaveImages;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;

@end
