@class NSString, VGFaceCaptureOptions, VGFaceKitTracker, VGFaceFittingFrameSelector;

@interface VGFaceCapture : NSObject {
    VGFaceFittingFrameSelector *_faceFrameSelector;
    VGFaceCaptureOptions *_options;
    BOOL _writeDebugFiles;
    VGFaceKitTracker *_faceTracker;
    BOOL _captureComplete;
}

@property (retain, nonatomic) NSString *rootPath;

- (id)currentState;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)enrolledPoses;
- (BOOL)processWithCaptureData:(id)a0 callback:(id /* block */)a1;
- (BOOL)startFaceExpressionCapture:(unsigned long long)a0;

@end
