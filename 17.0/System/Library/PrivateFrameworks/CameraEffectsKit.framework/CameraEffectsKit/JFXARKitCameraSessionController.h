@class ARDeviceOrientationSensor, NSString, ARSession, JFXCustomImageSensor, AVCaptureSession, ARFaceTrackingConfiguration, CMMotionManager, ARMotionSensor, AVCaptureDevice, NSObject;
@protocol OS_dispatch_queue, JFXARKitFrameDelegate;

@interface JFXARKitCameraSessionController : NSObject <ARSessionDelegate>

@property (retain, nonatomic) ARSession *arSession;
@property (retain, nonatomic) ARFaceTrackingConfiguration *faceTrackingConfiguration;
@property (retain, nonatomic) JFXCustomImageSensor *customImageSensor;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) ARMotionSensor *motionSensor;
@property (retain, nonatomic) ARDeviceOrientationSensor *orientationSensor;
@property (retain, nonatomic) AVCaptureSession *underlyingAVCaptureSession;
@property (retain, nonatomic) AVCaptureDevice *underlyingAVCaptureDevice;
@property (nonatomic) BOOL running;
@property (nonatomic) NSObject<OS_dispatch_queue> *arSessionDelegateQueue;
@property (weak, nonatomic) id<JFXARKitFrameDelegate> frameDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)provideSensorFrameSet:(id)a0 trackedFacesMetadata:(id)a1 faceObjectsMetadata:(id)a2;
- (BOOL)JT_setupARSession:(id *)a0;
- (id)initWithAVCaptureSession:(id)a0 captureDevice:(id)a1 arSessionDelegateQueue:(id)a2;
- (void)processExternalSensorData:(id)a0;
- (void)startARSession;
- (void)stopARSession;

@end
