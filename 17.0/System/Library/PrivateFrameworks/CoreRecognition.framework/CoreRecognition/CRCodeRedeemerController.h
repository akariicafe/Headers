@class NSString;
@protocol CRCodeRedeemerControllerDelegate;

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate>

@property (getter=isCaptureMode) BOOL captureMode;
@property unsigned long long captureCount;
@property double sessionTimeout;
@property long long whiteBalanceMode;
@property long long focusMode;
@property long long exposureMode;
@property long long torchMode;
@property (copy) NSString *cameraMode;
@property long long cameraPosition;
@property BOOL showDiagnosticHUD;
@property (weak) id<CRCodeRedeemerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)isCRCodeRedeemerAvailable;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 maxStage:(unsigned long long)a1;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 maxStage:(unsigned long long)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (id)init;
- (void).cxx_destruct;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidDisplayMessage:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReaderDidFindTarget:(id)a0;
- (void)showMessage:(id)a0 color:(id)a1 style:(unsigned long long)a2 duration:(double)a3;

@end
