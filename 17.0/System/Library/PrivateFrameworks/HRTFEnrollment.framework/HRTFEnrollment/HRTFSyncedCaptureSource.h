@class AVCaptureDeviceFormat, NSString, AVCaptureVideoPreviewLayer, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, AVCaptureSession, NSObject, AVCaptureVideoDataOutput, AVCaptureDataOutputSynchronizer;
@protocol OS_dispatch_queue, HRTFSyncedCaptureSourceDelegate;

@interface HRTFSyncedCaptureSource : NSObject <AVCaptureDataOutputSynchronizerDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _preferredPixelFormat;
    unsigned int _preferredDepthFormat;
    unsigned int _preferredColorResolutionX;
    unsigned int _preferredColorResolutionY;
    unsigned int _preferredDepthResolutionX;
    unsigned int _preferredDepthResolutionY;
    AVCaptureDeviceFormat *_finalColorFormat;
    AVCaptureDeviceFormat *_finalDepthFormat;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    AVCaptureVideoDataOutput *_colorDataOutput;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
}

@property (weak, nonatomic) id<HRTFSyncedCaptureSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0 options:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })a1;
- (void).cxx_destruct;
- (void)stopCaptureSession;
- (void)startCaptureSession;
- (BOOL)_initialize;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (BOOL)_configureVideoOutputsForDevice:(id)a0 inSession:(id)a1;
- (void)_handleCaptureSessionNotification:(id)a0;
- (BOOL)_verifyCaptureDevice:(id)a0;

@end
