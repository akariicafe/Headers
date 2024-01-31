@class LDCMNotificationUIManagerV4, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IOPortLDCMManagerV4 : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ldcmV4DispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) LDCMNotificationUIManagerV4 *notificationUIManager;
@property (nonatomic) unsigned int notification;
@property (nonatomic) unsigned int ldcmFeatureConnect;
@property (nonatomic) unsigned long long wetPollingInterval;
@property (nonatomic) unsigned long long dryPollingInterval;
@property (nonatomic) unsigned char isWet;
@property (nonatomic) int buildType;
@property (nonatomic) unsigned char previousLDCMPortStatus;
@property (nonatomic) BOOL isReceptacleEmpty;
@property (nonatomic) BOOL mitigationsEnabled;
@property (nonatomic) BOOL overrideEnabled;
@property (nonatomic) NSString *measurementInfoOutputString;
@property (nonatomic) BOOL uiActive;
@property (nonatomic) BOOL waveformExtractionDisabled;
@property (nonatomic) BOOL behaviorOverrideDisableMitigations;
@property (nonatomic) BOOL behaviorOverrideDisableUI;
@property (nonatomic) int currentMitigationsStatus;

- (void)dealloc;
- (void)setOverride:(unsigned char)a0;
- (void)logInfo:(id)a0;
- (void).cxx_destruct;
- (int)setUserOverride:(unsigned char)a0;
- (void)hideUI;
- (void)showUI;
- (int)setMitigations:(unsigned char)a0;
- (id)buildMeasurementHeaderString;
- (id)buildMeasurementOutputString:(id)a0 withMeasurementReason:(int)a1 withMeasurementEvent:(id)a2;
- (BOOL)checkIsReceptacleEmpty;
- (id)extractData:(unsigned int *)a0 :(unsigned long long)a1;
- (void)generateLDCMCSVData;
- (int)getData:(char *)a0 :(unsigned long long *)a1;
- (id)getMeasurementOutputString;
- (int)getWaveform:(char *)a0 :(unsigned long long *)a1;
- (void)handleAttachEvent;
- (void)handleDetachEvent;
- (void)handleLDCMInterrupt;
- (void)handleLDCMMitigationsStatusChange:(int)a0;
- (id)initWithParams:(unsigned long long)a0 withDryPollingInterval:(unsigned long long)a1 withService:(unsigned int)a2 withNotificationPort:(struct IONotificationPort { } *)a3 withServerRunloop:(struct __CFRunLoop { } *)a4;
- (void)performLDCMMeasurement:(int)a0;
- (void)processBehaviorDictionary:(id)a0;
- (id)publishAnalytics:(id)a0 withMeasurementReason:(int)a1 withWaveformRawData:(char *)a2 withWaveformDataLen:(unsigned long long)a3;
- (int)setLDCMMeasurementStatus:(int)a0;
- (int)setLDCMState:(int)a0;
- (int)setLiquidDetected:(unsigned char)a0;
- (int)setWaveformExtractionEnabled:(unsigned char)a0;
- (void)storeWaveform:(char *)a0 withWaveformDataLen:(unsigned long long)a1;

@end
