@interface LDCMMeasurementV4 : NSObject

@property (readonly, nonatomic) double ldcmLoadImpMag;
@property (readonly, nonatomic) double ldcmLoadImpPhase;
@property (readonly, nonatomic) double ldcmCalculatedRes;
@property (readonly, nonatomic) double ldcmCalculatedCap;
@property (readonly, nonatomic) double ldcmTIACurrentAmp;
@property (readonly, nonatomic) double ldcmVoltageAmp;
@property (readonly, nonatomic) double ldcmLeakageCurrentAmp;
@property (readonly, nonatomic) double ldcmMeasureTIASNR;
@property (readonly, nonatomic) double ldcmMeasureVoltageSNR;
@property (readonly, nonatomic) double ldcmCalTIAAmp;
@property (readonly, nonatomic) double ldcmCalVoltageAmp;
@property (readonly, nonatomic) double ldcmCalTIASNR;
@property (readonly, nonatomic) double ldcmCalVoltageSNR;
@property (readonly, nonatomic) double ldcmTIAGainCorrection;
@property (readonly, nonatomic) double ldcmVoltageGainCorrection;
@property (readonly, nonatomic) double ldcmPhaseComp;
@property (readonly, nonatomic) unsigned char ldcmRREFGated;
@property (readonly, nonatomic) unsigned char ldcmPortStatus;
@property (readonly, nonatomic) unsigned char ldcmMitigationsStatus;
@property (readonly, nonatomic) unsigned char ldcmFeatureStatus;
@property (readonly, nonatomic) unsigned char ldcmLowImp;
@property (readonly, nonatomic) unsigned char ldcmCompletion;
@property (readonly, nonatomic) unsigned char ldcmWet;
@property (readonly, nonatomic) unsigned char ldcmMeasurePin;
@property (readonly, nonatomic) unsigned short ldcmWetStateDuration;
@property (readonly, nonatomic) unsigned char ldcmWetStateTooLong;
@property (readonly, nonatomic) unsigned char ldcmWetTooLongLDCMDisabled;
@property (readonly, nonatomic) unsigned char ldcmIncompSNRAmpCnt;
@property (readonly, nonatomic) unsigned char ldcmIncompOVPCnt;
@property (readonly, nonatomic) unsigned char ldcmIncompTimeoutCnt;
@property (readonly, nonatomic) unsigned short ldcmSuccessfulCnt;

- (void)parseData:(char *)a0;
- (unsigned int)getBits:(unsigned int)a0 shift:(unsigned char)a1 mask:(unsigned int)a2;
- (id)initWithParams:(void *)a0 :(unsigned long long)a1;

@end
