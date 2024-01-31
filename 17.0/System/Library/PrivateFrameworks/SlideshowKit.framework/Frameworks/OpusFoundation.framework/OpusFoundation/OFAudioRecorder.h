@class AVCaptureMovieFileOutput, AVCaptureSession, NSString, NSURL, NSObject;
@protocol OFAudioRecorderDelegate;

@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic) BOOL recordsAudio;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) NSObject<OFAudioRecorderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void)startRecording;
- (void)dealloc;
- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (id)_connectionWithMediaType:(id)a0;
- (id)initWithSession:(id)a0 outputFileURL:(id)a1;

@end
