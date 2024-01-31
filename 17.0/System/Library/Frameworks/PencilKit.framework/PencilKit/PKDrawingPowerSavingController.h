@interface PKDrawingPowerSavingController : NSObject {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _movementDistanceHistoryBuffer;
    struct CGPoint { double x; double y; } _previousDrawingLocation;
    double _currentMovement;
    double _accumulatedMovement;
    double _previousRenderTimestamp;
    BOOL _valid;
    double _minimumMovementDistancePencil;
    double _minimumMovementDistanceFinger;
    double _minimumMovementDistanceTimeout;
    BOOL _isDrawingWithPencil;
    BOOL _isDrawingWithMarkerOrEraser;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
