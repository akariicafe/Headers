@class NSDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int chargingStateNotification;
@property (retain, nonatomic) NSDictionary *stateDescriptions;
@property (nonatomic) unsigned long long currentControllerClientState;
@property (nonatomic) unsigned long long lastChargingStatus;

+ (id)sharedInstance;

- (BOOL)disableCharging;
- (id)readNumberForPreferenceKey:(id)a0;
- (void)resetState;
- (id)init;
- (BOOL)enableCharging;
- (BOOL)setChargingStatus:(BOOL)a0;
- (id)status;
- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;
- (struct PowerUIControllerChargingStatus { BOOL x0; BOOL x1; })lastChargeStatus;
- (BOOL)shouldPriortizeDecisionForClientState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)overrideLastChargingStatus;
- (BOOL)disableChargingWithClientState:(unsigned long long)a0;
- (BOOL)enableChargingWithClientState:(unsigned long long)a0;

@end
