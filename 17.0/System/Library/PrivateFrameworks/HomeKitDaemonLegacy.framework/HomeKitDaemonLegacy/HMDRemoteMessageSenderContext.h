@class HMDDeviceHandle, NSString, NSArray, HMDAccountHandle, HMDAccountIdentifier, HMDHomeKitVersion;

@interface HMDRemoteMessageSenderContext : HMFObject <HMFObject, NSCopying>

@property (readonly, copy) HMDDeviceHandle *deviceHandle;
@property (copy) HMDDeviceHandle *localDeviceHandle;
@property (readonly, copy) HMDAccountIdentifier *accountIdentifier;
@property (readonly, copy) NSString *mergeID;
@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) HMDHomeKitVersion *deviceVersion;
@property (readonly, copy) NSString *pairingIdentityIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceHandle:(id)a0 accountHandle:(id)a1 accountIdentifier:(id)a2 deviceVersion:(id)a3 pairingIdentityIdentifier:(id)a4;

@end
