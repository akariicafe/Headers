@class SidecarService, ICDocCamImageCache, SidecarRequest;
@protocol ICRemoteDocCamViewControllerDelegate;

@interface ICRemoteDocCamViewController : UIViewController

@property (retain, nonatomic) SidecarService *sidecarService;
@property (retain, nonatomic) SidecarRequest *sidecarRequest;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (weak, nonatomic) id<ICRemoteDocCamViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelSidecarRequest;
- (id)initWithImageCache:(id)a0;
- (id)makeAlertControllerForError:(id)a0;
- (id)makeDevicesAlertController;
- (id)makeNoDevicesAlertController;
- (id)makeProgressAlertControllerForDevice:(id)a0;
- (void)makeSidecarRequestToDevice:(id)a0;
- (id)progressAlertMessageForDevice:(id)a0;
- (void)sidecarRequestDidFinish;

@end
