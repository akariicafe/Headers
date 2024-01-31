@class CSAttSiriGazeEstimator, NSString, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, AVCaptureSession, NSObject, AVCaptureVideoDataOutput, AVCaptureDataOutputSynchronizer;
@protocol OS_dispatch_queue, CSAttSiriFaceTrackingCaptureDelegate;

@interface CSAttSiriFaceTrackingCapture : NSObject <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate> {
    BOOL _shouldStart;
    BOOL _captureReady;
}

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDataObjectsQueue;
@property (retain, nonatomic) AVCaptureDataOutputSynchronizer *dataOutputSynchronizer;
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (retain, nonatomic) AVCaptureDepthDataOutput *depthOutput;
@property (retain, nonatomic) AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic) BOOL hasReceivedFirstFrame;
@property (retain, nonatomic) CSAttSiriGazeEstimator *gazeEstimator;
@property (weak, nonatomic) id<CSAttSiriFaceTrackingCaptureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance:(BOOL)a0;

- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (unsigned int)_getPixelFormatType:(id)a0;
- (void)_prewarmFaceTracking;
- (void)_prewarmFaceTrackingLegacy;
- (void)_prewarmFaceTrackingWithouMetaData;
- (id)getGazeEstimator;
- (void)logImageBufferStats:(struct opaqueCMSampleBuffer { } *)a0;
- (void)startFaceTracking;
- (void)stopFaceTracking;

@end
