@class NSNumber, NSUUID, NSDictionary, HMDHome, NSString, HMDCharacteristic, HMDHAPAccessory;

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) HMDHome *home;
@property (readonly) HMDHAPAccessory *accessory;
@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSNumber *serviceID;
@property (readonly, nonatomic) NSNumber *characteristicID;
@property (readonly, nonatomic) NSDictionary *actionInformation;
@property (readonly, nonatomic) NSString *dumpState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)dictionaryRepresentation;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;
- (BOOL)requiresDeviceUnlock;
- (id)associatedAccessories;
- (void)_processWriteActionModelUpdated:(id)a0 message:(id)a1;
- (unsigned long long)entitlementsForNotification;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithUUID:(id)a0 characteristic:(id)a1 targetValue:(id)a2 actionSet:(id)a3;
- (BOOL)isActionForCharacteristic:(id)a0;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (BOOL)isCompatibleWithAction:(id)a0;
- (BOOL)isSecureAction;
- (BOOL)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)initWithUUID:(id)a0 accessoryUUID:(id)a1 serviceIID:(id)a2 characteristicIID:(id)a3 targetValue:(id)a4 actionSet:(id)a5;
- (BOOL)isStaleWithAccessory:(id)a0;

@end
