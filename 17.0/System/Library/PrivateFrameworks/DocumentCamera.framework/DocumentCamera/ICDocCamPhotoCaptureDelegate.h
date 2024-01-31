@class AVCapturePhotoSettings, NSDictionary, NSString;

@interface ICDocCamPhotoCaptureDelegate : NSObject <AVCapturePhotoCaptureDelegate>

@property (retain, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings;
@property (retain, nonatomic) NSDictionary *metaData;
@property (nonatomic) struct __CVBuffer { } *pbRef;
@property (nonatomic) float highestSharpness;
@property (copy, nonatomic) id /* block */ willCapturePhotoAnimation;
@property (copy, nonatomic) id /* block */ completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)captureOutput:(id)a0 willBeginCaptureForResolvedSettings:(id)a1;
- (void)captureOutput:(id)a0 didFinishProcessingLivePhotoToMovieFileAtURL:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 photoDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 resolvedSettings:(id)a4 error:(id)a5;
- (void)captureOutput:(id)a0 didFinishCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (void)captureOutput:(id)a0 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)a1 resolvedSettings:(id)a2;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 willCapturePhotoForResolvedSettings:(id)a1;
- (void)captureOutput:(id)a0 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 resolvedSettings:(id)a3 bracketSettings:(id)a4 error:(id)a5;
- (void)didFinish;
- (id)initWithRequestedPhotoSettings:(id)a0 willCapturePhotoAnimation:(id /* block */)a1 completed:(id /* block */)a2;
- (float)sharpnessForImageBuffer:(struct __CVBuffer { } *)a0;

@end
