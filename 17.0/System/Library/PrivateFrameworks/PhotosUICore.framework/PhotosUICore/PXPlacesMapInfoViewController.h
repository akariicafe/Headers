@class PXPlacesMapModeController;

@interface PXPlacesMapInfoViewController : UIViewController

@property (readonly, nonatomic) PXPlacesMapModeController *mapModeController;

- (id)init;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tapped3dButton:(id)a0;
- (void)mapTypeChanged:(id)a0;
- (id)initWithMapModeController:(id)a0;
- (void)tappedDimView:(id)a0;
- (void)tappedDone:(id)a0;

@end
