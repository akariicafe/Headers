@class NSString, HMFMessageDispatcher, NSSet, NSUUID, HMDSymptomManager, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessorySymptomHandler : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessorySymptomsDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (copy, nonatomic) NSSet *symptoms;
@property (retain, nonatomic) NSUUID *sfDeviceIdentifier;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateSymptoms:(id)a0;
- (id)_filteredSymptomsForSymptoms:(id)a0;
- (void)_handleFixErrorMessage:(id)a0;
- (BOOL)_isWiFiMismatchSymptomCausedByWACPairingInHome:(id)a0;
- (BOOL)_isWiFiMismatchSymptomCausedByWirelessCarPlay:(id)a0;
- (void)_registerMessages;
- (void)_sendStatusUpdate;
- (BOOL)_shouldFilterWiFiMismatchSymptom:(id)a0;
- (void)_updateFrameworkClients;
- (void)_updateStateWithNewSFDeviceIdentifier:(id)a0;
- (void)_updateStateWithNewSymptoms:(id)a0;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)handleAccessoryDeviceUpdated;
- (id)initWithAccessory:(id)a0 symptoms:(id)a1;
- (id)initWithAccessory:(id)a0 symptoms:(id)a1 symptomManager:(id)a2;
- (void)symptomManager:(id)a0 didChangeSFDeviceIdentifier:(id)a1;
- (void)symptomManager:(id)a0 didChangeSymptoms:(id)a1;

@end
