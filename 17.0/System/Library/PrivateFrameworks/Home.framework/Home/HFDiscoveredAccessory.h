@class NSError, NSString, NSUUID, HMAccessory, HMAccessoryCategory, SFDevice, NSDate;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>

@property (retain, nonatomic) HMAccessory *accessory;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMAccessoryCategory *category;
@property (copy, nonatomic) NSString *manufacturer;
@property (nonatomic) unsigned long long certificationStatus;
@property (readonly, nonatomic) SFDevice *sharingDevice;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *discoveryDate;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL requiresSetupCode;
@property (readonly, nonatomic) BOOL requiresSoftwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discoveredAccessoryFromSetupDescription:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)_descriptionForStatus:(unsigned long long)a0;
- (id)identify;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2;
- (id)initWithSharingDevice:(id)a0;
- (void)updateStatus:(unsigned long long)a0 error:(id)a1;

@end
