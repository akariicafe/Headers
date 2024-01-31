@class AVCaptureVideoPreviewLayer, AVCaptureSession;

@interface ICDocCamPreviewView : UIView

@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (retain, nonatomic) AVCaptureSession *session;

+ (Class)layerClass;

@end
