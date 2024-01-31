@class HMHome, HUMultiCameraRecordingOptionsItemManager, NSMutableArray;

@interface HUMultiCameraRecordingOptionsTableViewController : HUCameraRecordingOptionsTableViewController

@property (retain, nonatomic) HUMultiCameraRecordingOptionsItemManager *recordingOptionsItemManager;
@property (retain, nonatomic) NSMutableArray *cameraSettingsModuleControllers;
@property (retain, nonatomic) HMHome *home;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithHome:(id)a0;
- (void)dismissTextViewController;
- (id)itemModuleControllers;

@end
