@class NSString, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, BKSAccelerometer;
@protocol DCDocumentCameraViewServiceViewController;

@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>

@property (readonly, nonatomic, getter=viewServiceViewController) id<DCDocumentCameraViewServiceViewController> viewServiceViewController;
@property (readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property (retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession;
@property (retain, nonatomic) BKSAccelerometer *accelerometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)dealloc;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (void)viewDidLoad;
- (void)didCancel;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)didFailWithError:(id)a0;
- (id)castedChildViewController;
- (void)didFinishWithDocumentInfoCollection:(id)a0;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
