@class NSString, HMMediaSystem, HMAccessory, NSUUID;

@interface HFSymptomResultContextProvider : NSObject <HFSymptomResultContextProviding>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMMediaSystem *mediaSystem;
@property (readonly, copy, nonatomic) NSString *homeKitObjectName;
@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *detailedErrorDescriptionForiCloudSymptom;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *currentDeviceNetworkSSID;
@property (readonly, copy, nonatomic) NSString *accessoryNetworkSSID;
@property (readonly, copy, nonatomic) NSString *currentUserID;
@property (readonly, copy, nonatomic) NSString *currentAppleMusicAccountName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)fixStateForSymptom:(id)a0;
- (id)initWithAccessory:(id)a0 mediaSystem:(id)a1;
- (BOOL)shouldDisplayManualFixOptionForSymptom:(id)a0;

@end
