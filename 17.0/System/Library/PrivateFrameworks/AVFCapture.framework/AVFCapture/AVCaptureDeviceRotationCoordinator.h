@class FBSOrientationObserver, NSString, AVWeakReference, CALayer, AVCaptureDevice, AVCaptureRotationHelperLayer;

@interface AVCaptureDeviceRotationCoordinator : NSObject <AVCaptureRotationHelperLayerDelegate> {
    AVWeakReference *_coordinatorWeakReference;
    AVWeakReference *_deviceWeakReference;
    long long _devicePosition;
    AVWeakReference *_previewLayerWeakReference;
    AVCaptureRotationHelperLayer *_rotationHelperLayer;
    double _videoRotationAngleForHorizonLevelPreview;
    double _videoRotationAngleForHorizonLevelCapture;
    BOOL _isInitialVideoRotationAngleForHorizonLevelPreviewSet;
    BOOL _isInitialVideoRotationAngleForHorizonLevelCaptureSet;
    BOOL _monitorSystemReferenceAngle;
    unsigned long long _previewLayerSystemReferenceAngleMode;
    FBSOrientationObserver *_activeInterfaceOrientationObserver;
    BOOL _monitorDeviceOrientation;
    int _deviceOrientationNotificationToken;
}

@property (readonly, weak, nonatomic) AVCaptureDevice *device;
@property (readonly, weak, nonatomic) CALayer *previewLayer;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelPreview;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelCapture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)_calculateVideoRotationAngleForHorizonLevelCaptureWithDeviceOrientation:(long long)a0;
- (void)_calculateVideoRotationAngleForHorizonLevelPreviewWithSystemReferenceAngle:(double)a0;
- (long long)_currentDeviceOrientation;
- (void)_handleActiveInterfaceOrientationUpdate:(id)a0;
- (void)_handleSystemReferenceAngleDidChangeNotification:(id)a0;
- (BOOL)_isExternalDeviceType:(id)a0;
- (double)_systemReferenceAngleForDeviceOrientation:(long long)a0;
- (void)_updateVideoRotationAngleForHorizonLevelCapture;
- (void)_updateVideoRotationAngleForHorizonLevelPreview;
- (void)handleVideoPreviewLayerDidBecomeVisibleNotification:(id)a0;
- (id)initWithDevice:(id)a0 previewLayer:(id)a1;
- (void)layer:(id)a0 didBecomeVisible:(BOOL)a1;

@end
