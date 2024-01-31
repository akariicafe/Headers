@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {
    int _previousIStopZEstimateDelta;
    int _currentIStopZEstimateDelta;
}

@property (nonatomic) int lastPassingIStopZEstimateDelta;
@property (nonatomic) int previousIStopZEstimateDelta;
@property (nonatomic) int currentIStopZEstimateDelta;

@end
