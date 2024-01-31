@interface _UIVelocityIntegrator : NSObject {
    struct deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>> { struct __split_buffer<_UIVelocityIntegratorDataSample *, std::allocator<_UIVelocityIntegratorDataSample *>> { struct _UIVelocityIntegratorDataSample **__first_; struct _UIVelocityIntegratorDataSample **__begin_; struct _UIVelocityIntegratorDataSample **__end_; struct __compressed_pair<_UIVelocityIntegratorDataSample **, std::allocator<_UIVelocityIntegratorDataSample *>> { struct _UIVelocityIntegratorDataSample **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>> { unsigned long long __value_; } __size_; } _samples;
    BOOL _hasMemoizedVelocity;
    double _resetHysteresisOnSampleThetaDiff;
    id /* block */ _didResetHysteresisOnThetaDiffHandler;
    long long _maxNumberOfSamples;
    union { struct { double x; double y; double z; } ; void /* unknown type, empty encoding */ vector; } _totalTranslation;
    union { struct { double x; double y; double z; } ; void /* unknown type, empty encoding */ vector; } _memoizedVelocity;
}

@property (nonatomic) double minimumRequiredMovement;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } offset;
@property (nonatomic) double hysteresisTimeInterval;
@property (readonly, nonatomic) union { struct { double x0; double x1; double x2; } x0; } velocity3D;
@property (readonly, nonatomic) union { struct { double x0; double x1; double x2; } x0; } offset3D;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSample:(struct CGPoint { double x0; double x1; })a0;
- (void)addSample3D:(union { struct { double x0; double x1; double x2; } x0; })a0;
- (BOOL)hasVelocity;

@end
