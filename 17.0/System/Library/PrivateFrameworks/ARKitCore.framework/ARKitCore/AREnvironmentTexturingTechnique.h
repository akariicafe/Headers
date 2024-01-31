@class ARPlaneWorld, AREnvironmentProbeManager, NSObject, ARImageData;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AREnvironmentTexturingTechnique : ARTechnique {
    ARPlaneWorld *_planeWorld;
    NSObject<OS_dispatch_queue> *_planeUpdateQueue;
    NSObject<OS_dispatch_queue> *_networkPrewarmQueue;
    ARImageData *_ultraWide;
    NSObject<OS_dispatch_semaphore> *_ultraWideSemaphore;
}

@property (retain) AREnvironmentProbeManager *probeManager;
@property BOOL networkIntialized;
@property (readonly) BOOL wantsHDREnvironmentTextures;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)processData:(id)a0;
- (id)_fullDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (id)initWithOptions:(long long)a0 wantsHDREnvironmentTextures:(BOOL)a1;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (unsigned long long)requiredSensorDataTypes;

@end
