@class AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSMutableArray;

@interface CMContinuityCaptureAVCaptureVideoSession : CMContinuityCaptureAVCaptureBaseSession {
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSMutableArray *_connections;
    AVCaptureDeviceInput *_videoCameraInput;
    NSMutableArray *_connectionEntities;
}

@property (retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, getter=isMulticamSession) BOOL multicamSession;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)addConnections:(id)a0;
- (BOOL)hasConnectionsForEntity:(long long)a0;
- (id)initWithQueue:(id)a0 requiresMulticamSession:(BOOL)a1;
- (void)removeConnections:(id)a0;

@end
