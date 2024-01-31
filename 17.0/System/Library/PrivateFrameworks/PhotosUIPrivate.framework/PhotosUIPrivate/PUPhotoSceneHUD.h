@class PXHUDView, NSURL;

@interface PUPhotoSceneHUD : UIView

@property (readonly, nonatomic) PXHUDView *hudView;
@property (readonly, nonatomic) NSURL *mdataURL;

- (void)update;
- (void).cxx_destruct;
- (id)initWithPhoto:(id)a0;

@end
