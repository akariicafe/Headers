@class NSObject, CBFloatArray, CBFloatArray2D;
@protocol OS_os_log;

@interface CBChromaticCorrectionParams : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned long long _luxTableSizeOG;
    float *_luxTableOG;
    unsigned long long _nitsTableSizeOG;
    float *_nitsTableOG;
    unsigned long long _strengthTableSizeOG;
    float *_strengthTableOG;
    float _rampUpdateRateOG;
    float *_rampBezierAnchorsOG;
}

@property (readonly) CBFloatArray *luxTable;
@property (readonly) CBFloatArray *nitsTable;
@property (readonly) CBFloatArray2D *strengthTable;
@property (readonly) CBFloatArray *rampBezierAnchors;
@property (readonly) float luxActivationThreshold;
@property (readonly) float nitsActivationThreshold;
@property (readonly) float rampUpdateRate;
@property (readonly) float rampUpDuration;
@property (readonly) float rampUpLuxDeltaThreshold;
@property (readonly) float rampDownDuration;
@property (readonly) float rampDownLuxDeltaThreshold;
@property (readonly) float aodRampDuration;

- (void)dealloc;
- (float)getStrengthForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1;
- (BOOL)initAmmoliteFromServiceOG:(unsigned int)a0;
- (id)initFromAmmoliteFromService:(unsigned int)a0;
- (id)initFromTwilightFromService:(unsigned int)a0;
- (BOOL)initFromTwilightFromServiceOG:(unsigned int)a0;

@end
