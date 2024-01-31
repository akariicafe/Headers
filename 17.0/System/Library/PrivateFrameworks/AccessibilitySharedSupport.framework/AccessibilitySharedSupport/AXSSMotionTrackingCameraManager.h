@class AVCaptureDeviceDiscoverySession, NSArray, NSMutableArray, AVCaptureDevice;
@protocol AXSSMotionTrackingCameraManagerDelegate;

@interface AXSSMotionTrackingCameraManager : NSObject

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSMutableArray *_compatibleCaptureDevices;
@property (retain, nonatomic) NSMutableArray *_allCaptureDevices;
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *_captureDeviceDiscoverySession;
@property (readonly, copy, nonatomic) NSArray *compatibleCaptureDevices;
@property (readonly, copy, nonatomic) NSArray *allCaptureDevices;
@property (readonly, nonatomic) AVCaptureDevice *defaultCaptureDevice;
@property (weak, nonatomic) id<AXSSMotionTrackingCameraManagerDelegate> delegate;

+ (id)_sortedCaptureDevicesFromDevices:(id)a0;

- (void)stopMonitoring;
- (id)init;
- (void)dealloc;
- (void)_resetDiscoverySession;
- (void)_captureDeviceUpdated;
- (void)_captureDeviceDisconnected:(id)a0;
- (void)_startDiscoverySession;
- (void)_allCaptureDevicesChanged:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_captureDeviceConnected:(id)a0;
- (void)startMonitoring;
- (void)_stopDiscoverySession;

@end
