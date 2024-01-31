@class HMDUnassociatedAppleMediaAccessory, NSUUID, NSString, HMBCloudZoneID, HMSoftwareUpdateDescriptor, HMDDevice;

@interface HMDAppleAccessoryPairingHomeState : HMFObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSUUID *homeUUID;
@property (retain, nonatomic) NSString *configurationAppID;
@property (retain, nonatomic) NSUUID *deviceIdentifier;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) HMSoftwareUpdateDescriptor *lastPostedSoftwareUpdateDescriptor;
@property (readonly, nonatomic) HMBCloudZoneID *cloudZoneID;
@property (readonly, nonatomic) HMDUnassociatedAppleMediaAccessory *accessory;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudZoneID:(id)a0 accessory:(id)a1;

@end
