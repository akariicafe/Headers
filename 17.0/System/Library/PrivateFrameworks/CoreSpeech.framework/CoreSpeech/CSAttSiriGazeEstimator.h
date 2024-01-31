@protocol CSAttSiriFaceTrackingCaptureDelegate;

@interface CSAttSiriGazeEstimator : NSObject

@property (weak, nonatomic) id<CSAttSiriFaceTrackingCaptureDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)faceLandmarkStats:(id)a0;
- (BOOL)getGazeInference:(struct opaqueCMSampleBuffer { } *)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 metaData:(id)a2;
- (id)getVisualSpeechLandmarks:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotateOrientationToPortrait:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
