@class NSData, NSString, NSUUID, AVCAudioStream, AVCStreamInput, AVCaptureAudioDataOutput, CMContinuityCaptureAVCaptureAudioSession, AVCaptureDevice, AVCaptureDeviceInput;
@protocol ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureRemoteAudioDevice : CMContinuityCaptureDeviceBase <AVCAudioStreamDelegate, AVCStreamInputDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    id<ContinuityCaptureTransportDevice> _transportDevice;
    AVCAudioStream *_avcAudioStream;
    AVCStreamInput *_avcStreamInput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    AVCaptureDeviceInput *_audioDeviceInput;
    unsigned long long _audioBufferOutputCounter;
    unsigned long long _audioBufferDropCounter;
    double _audioSampleRate;
    unsigned int _audioBytesPerSample;
    unsigned int _requiredAudioSampleCountPerBuffer;
    NSData *_remainingAudioDataFromPreviousSbuf;
    BOOL _audioClockIsSynchronized;
    unsigned long long _networkAudioSampleTime;
    unsigned long long _lastAudioSynchronizationNetworkSampleTime;
    BOOL _disableBufferBlockSizeCheck;
    CMContinuityCaptureAVCaptureAudioSession *_captureSession;
    BOOL _avcStreamInputActive;
    id /* block */ _stopCompletionBlock;
    AVCaptureDevice *_audioDevice;
    BOOL _captureStackActive;
    NSUUID *_cameraCaptureStreamSessionID;
}

@property (readonly, retain) CMContinuityCaptureAVCaptureAudioSession *captureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (struct opaqueCMSampleBuffer { } *)_createSampleBufferForAudioData:(id)a0 dataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 formatDescription:(struct opaqueCMFormatDescription { } *)a3;
- (void)_dispatchAudioFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_processIncomingAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_resetNetworkSampleTime;
- (BOOL)_shouldPrintDroppedSampleBufferLog:(long long)a0;
- (id)createAVCAudioStream;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithCapabilities:(id)a0 compositeDelegate:(id)a1 captureSession:(id)a2;
- (id)newAudioStreamCurrentConfiguration:(long long)a0;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)a0 eventData:(id)a1 error:(id)a2;
- (void)postActionOfType:(unsigned long long)a0 forEvent:(id)a1 option:(unsigned long long)a2;
- (BOOL)startAVConferenceStack:(unsigned long long)a0;
- (BOOL)startCameraCaptureStack:(unsigned long long)a0;
- (BOOL)stopAVConferenceStack;
- (BOOL)stopCameraCaptureStack:(unsigned long long)a0;
- (void)stopCaptureStack:(unsigned long long)a0 completion:(id /* block */)a1;

@end
