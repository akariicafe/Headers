@class CBALSHotspotLocation, NSObject, CBALSEvent;
@protocol OS_os_log;

@interface CBALSNode : NSObject {
    NSObject<OS_os_log> *_logHandle;
    int _placement;
    float _superFastIntegrationTime;
    float _fastIntegrationTime;
    float _slowIntegrationTime;
    BOOL _colorSupport;
    unsigned int _alsIOService;
}

@property (readonly, nonatomic) struct __IOHIDServiceClient { } *alsService;
@property (retain, nonatomic) CBALSEvent *currentALSEvent;
@property (readonly, nonatomic) int orientation;
@property (readonly, nonatomic) int sensorType;
@property (readonly, retain, nonatomic) CBALSHotspotLocation *overrideHotspot;
@property (readonly, nonatomic) BOOL useProxForOcclusion;
@property (readonly, nonatomic) long long digitizerFilterWindow;

- (void)dealloc;
- (id)description;
- (BOOL)handleALSEvent:(id)a0;
- (BOOL)conformsToHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyALSEvent;
- (id)copyALSEventWithinTimeout:(float)a0;
- (struct __IOHIDEvent { } *)copyEvent;
- (id)copyHotspotLocation;
- (BOOL)getDigitizerFilterWindow;
- (BOOL)getUseProxForOcclusion;
- (void)initALSProperties;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)isColorSupported;

@end
