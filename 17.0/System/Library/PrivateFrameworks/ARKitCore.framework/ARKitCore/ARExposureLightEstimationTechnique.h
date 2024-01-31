@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARExposureLightEstimationTechnique : ARTechnique <ARTechniqueBusyState> {
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    float _temperature;
    float _lightIntensity;
    struct ExponentialSmoother<float> { struct optional<float> { union { char __null_state_; float __val_; } ; BOOL __engaged_; } state; } _smoother;
}

@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)processData:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (unsigned long long)requiredSensorDataTypes;

@end
