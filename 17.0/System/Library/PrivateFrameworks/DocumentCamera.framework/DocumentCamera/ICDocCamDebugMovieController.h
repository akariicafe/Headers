@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSURL, NSObject, AVAssetWriterInputMetadataAdaptor, AVCaptureConnection;
@protocol OS_dispatch_queue, ICDocCamDebugMovieControllerDelegate;

@interface ICDocCamDebugMovieController : NSObject

@property (nonatomic) long long referenceOrientation;
@property (weak, nonatomic) AVCaptureConnection *videoConnection;
@property (weak, nonatomic) id<ICDocCamDebugMovieControllerDelegate> delegate;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterVideoIn;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterMetadataIn;
@property (retain, nonatomic) AVAssetWriterInputMetadataAdaptor *assetWriterMetadataAdaptor;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movieWritingQueue;
@property (nonatomic) BOOL readyToRecordVideo;
@property (nonatomic) BOOL readyToRecordMetadata;
@property (nonatomic) BOOL recordingWillBeStarted;
@property (nonatomic) BOOL recordingWillBeStopped;
@property (nonatomic) BOOL canRecordFrames;
@property (getter=isRecording) BOOL recording;
@property long long videoOrientation;
@property (nonatomic) unsigned long long backgroundRecordingID;

- (void)stopRecording;
- (void)startRecording;
- (void)recordingDidStop;
- (void).cxx_destruct;
- (void)removeFile:(id)a0;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)a0;
- (id)initWithDelegate:(id)a0 videoConnection:(id)a1 referenceOrientation:(long long)a2;
- (BOOL)inputsReadyToRecord;
- (void)pauseCaptureSessionForMovieRecording;
- (void)recordFrame:(struct opaqueCMSampleBuffer { } *)a0 fromConnection:(id)a1;
- (void)recordingDidStart;
- (void)recordingWillStart;
- (void)recordingWillStop;
- (void)resumeCaptureSessionForMovieRecording;
- (void)saveMovieToCameraRoll;
- (BOOL)setupAssetWriterMetadataInputAndMetadataAdaptor;
- (BOOL)setupAssetWriterVideoInput:(struct opaqueCMFormatDescription { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromCurrentVideoOrientationToOrientation:(long long)a0;
- (BOOL)writeMetaDataAtFrame:(long long)a0 intrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 ofType:(id)a1 atFrame:(long long)a2;

@end
