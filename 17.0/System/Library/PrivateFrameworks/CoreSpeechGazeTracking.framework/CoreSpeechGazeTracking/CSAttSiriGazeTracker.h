@class NSObject, NSString, CSAttSiriGeneralizedRegressorCalibration, CSAttSiriGazeTrackingData, NSMutableArray, CSAttSiriGazeAreaOfInterest;
@protocol CSAttSiriGazeTrackerDelegate, OS_dispatch_queue;

@interface CSAttSiriGazeTracker : NSObject <CSAttSiriFaceTrackingCaptureDelegate> {
    id<CSAttSiriGazeTrackerDelegate> _delegate;
    NSMutableArray *_areasOfInterest;
    CSAttSiriGazeAreaOfInterest *_mouthTracker;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CSAttSiriGeneralizedRegressorCalibration *gazeEstimator;
    CSAttSiriGazeTrackingData *dataParser;
    BOOL _useDefaultFaceCaptureSession;
}

@property (readonly, nonatomic) BOOL mouthOpen;
@property (readonly, nonatomic) BOOL hasFace;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } gazePoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)extraHorizontalGazePadding;
+ (float)extraVerticalGazePadding;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)addAreaOfInterest:(id)a0;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)didOutputGazeTrackingData:(id)a0 time:(unsigned long long)a1;
- (void)_updateActiveAreas:(BOOL)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateMouth:(BOOL)a0;
- (BOOL)areaOfInterest:(id)a0 hadGazeFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (BOOL)areaOfInterestHasGaze:(id)a0;
- (void)gazeEstimate:(struct CGPoint { double x0; double x1; })a0;
- (void)gazeTrackerDidMakeObservationWithFace:(BOOL)a0 andGaze:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDelegate:(id)a0 gazeModelFile:(id)a1 useDefaultFaceCaptureSession:(BOOL)a2;
- (id)initWithDelegate:(id)a0 gazeModelFile:(id)a1 useDefaultFaceCaptureSession:(BOOL)a2 areasOfInterest:(id)a3;
- (BOOL)mouthIsOpen;
- (BOOL)mouthOpeningsFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)removeAllAreasOfInterest;
- (void)removeAreaOfInterest:(id)a0;

@end
