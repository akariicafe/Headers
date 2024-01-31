@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMAltimeterInternal : NSObject {
    struct Dispatcher { void /* function */ **x0; id x1; } *fFilteredPressureDispatcher;
    id /* block */ fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    struct Sample { double timestamp; struct { float pressure; float temperature; } pressureData; } fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    BOOL fBaselineReceived;
    float fMostRecentFilteredPressure;
    struct deque<float, std::allocator<float>> { struct __split_buffer<float *, std::allocator<float *>> { float **__first_; float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<float>> { unsigned long long __value_; } __size_; } fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    void *fLocationdConnection;
    id /* block */ fHandler;
    id /* block */ fSignificantElevationSampleHandler;
    double fElevationAscendedOffset;
    double fElevationDescendedOffset;
    BOOL fStopSignificantElevationUpdates;
    double fFilteredElevationOffset;
    BOOL fStopRelativeAltitudeUpdates;
    NSOperationQueue *fAbsoluteAltitudeClientQueue;
    id /* block */ fAbsoluteAltitudeClientHandler;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_teardown;
- (void)_handleAbsoluteAltitudeUpdate:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)_pauseAbsoluteAltitudeUpdates;
- (void)_queryElevationProfileFromDate:(id)a0 toDate:(id)a1 withBatchSize:(unsigned long long)a2 fromRecordId:(int)a3 withHandler:(id /* block */)a4;
- (void)_queryElevationProfileFromDate:(id)a0 toDate:(id)a1 withBatchSize:(unsigned long long)a2 withHandler:(id /* block */)a3;
- (void)_querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_releaseHandlerObjects;
- (void)_resumeAbsoluteAltitudeUpdates;
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_startRelativeAltitudeUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_stopAbsoluteAltitudeUpdates;
- (void)_stopElevationUpdates;
- (void)_stopRelativeAltitudeUpdates;
- (void)_stopSignificantElevationUpdates;

@end
