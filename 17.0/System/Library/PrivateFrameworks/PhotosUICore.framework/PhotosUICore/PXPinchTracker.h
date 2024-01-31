@class NSString, PXNumberFilter, PXChangeDirectionNumberFilter;

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker> {
    struct { BOOL initialValues; BOOL geometry; } _needsUpdateFlags;
    BOOL _didSetInitialValues;
    struct CGPoint { double x; double y; } _initialCenter;
    struct CGSize { double width; double height; } _initialSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransformInverse;
    struct CGPoint { double x; double y; } _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint { double x; double y; } _initialPinchOrigin;
    PXNumberFilter *_pinchRotationFilter;
    PXNumberFilter *_horizontalVelocityFilter;
    PXNumberFilter *_verticalVelocityFilter;
    PXNumberFilter *_scaleVelocityFilter;
    PXNumberFilter *_rotationalVelocityFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
}

@property (nonatomic, setter=_setCenter:) struct CGPoint { double x; double y; } center;
@property (nonatomic, setter=_setSize:) struct CGSize { double width; double height; } size;
@property (nonatomic, setter=_setTransform:) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic, setter=_setVelocity:) struct PXDisplayVelocity { double x; double y; double scale; double rotation; } velocity;
@property (nonatomic, setter=_setScale:) double scale;
@property (nonatomic, setter=_setScaleDirection:) long long scaleDirection;
@property (readonly, nonatomic) double rotationHysteris;
@property (readonly, nonatomic) double scaleHysteresis;
@property (readonly, nonatomic) BOOL shouldResize;
@property (nonatomic) struct CGPoint { double x; double y; } pinchLocation1;
@property (nonatomic) struct CGPoint { double x; double y; } pinchLocation2;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)didPerformChanges;
- (BOOL)_needsUpdate;
- (id)mutableChangeObject;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (void)_invalidateGeometry;
- (void)_invalidateInitialValues;
- (void)_transformPinchLocation1:(struct CGPoint { double x0; double x1; })a0 location2:(struct CGPoint { double x0; double x1; })a1 intoCenter:(struct CGPoint { double x0; double x1; } *)a2 distance:(double *)a3 angle:(double *)a4;
- (void)_updateGeometryIfNeeded;
- (void)_updateInitialValuesIfNeeded;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
