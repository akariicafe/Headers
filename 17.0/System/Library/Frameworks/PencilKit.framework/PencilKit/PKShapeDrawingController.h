@class PKStrokeRenderMask, NSUUID, CHRecognizer, PKShape;
@protocol PKShapeDrawingControllerDelegate;

@interface PKShapeDrawingController : NSObject {
    struct vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> { struct IntPoint *__begin_; struct IntPoint *__end_; struct __compressed_pair<ClipperLib::IntPoint *, std::allocator<ClipperLib::IntPoint>> { struct IntPoint *__value_; } __end_cap_; } _currentStrokePoints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentStrokeBounds;
    BOOL _closedShapeDetected;
    BOOL _stopGestureDetected;
    BOOL _shouldDetect;
    struct vector<TimestampedPoint, std::allocator<TimestampedPoint>> { struct TimestampedPoint *__begin_; struct TimestampedPoint *__end_; struct __compressed_pair<TimestampedPoint *, std::allocator<TimestampedPoint>> { struct TimestampedPoint *__value_; } __end_cap_; } _timestampedPoints;
    struct { union { struct CGPoint { double x; double y; } point; struct CGPoint { double x; double y; } location; } ; double force; double azimuth; double altitude; double velocity; double directionAngle; double zPosition; double timestamp; BOOL predicted; long long estimationUpdateIndex; double length; BOOL hasEstimatedAltitudeAndAzimuth; } _averageInputPoint;
    unsigned long long _numInputPoints;
    double _strokeStartTime;
    double _latestAddedPointTime;
    double _strokeDuration;
    double _minimumRecognitionDelay;
    double _maximumRecognitionDelay;
    BOOL _smartFillEnabled;
    BOOL _shapeRecognitionOn;
    id<PKShapeDrawingControllerDelegate> _delegate;
    PKShape *_detectedShape;
    PKStrokeRenderMask *_smartFillRenderMask;
    NSUUID *_smartFillGroupID;
    CHRecognizer *_shapeRecognizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
