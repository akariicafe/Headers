@class NSData, NSUUID, NSArray, HMDDeviceCapabilities, NSString, HMDHomeKitVersion, NSSet, HMFProductInfo, HMDAccount, HMDDeviceAddress, HMFNetService, HMDRPIdentity;
@protocol HMFCancellable;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding> {
    HMFNetService *_observedNetService;
    id<HMFCancellable> _netServiceKVOCancellation;
    BOOL _lastKnownIsPublishingStateValue;
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSSet *_handles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *identities;
@property (copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash;
@property (copy) HMFProductInfo *productInfo;
@property (weak) HMDAccount *account;
@property (getter=isDirty) BOOL dirty;
@property (getter=isLocallyTracked) BOOL locallyTracked;
@property (getter=isCloudTracked) BOOL cloudTracked;
@property (copy) HMDDeviceCapabilities *capabilities;
@property (retain) HMDHomeKitVersion *localOnlyVersionFromIDS;
@property (readonly, copy) NSData *pushToken;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy) NSUUID *sharedUserIDSIdentifier;
@property (readonly) BOOL supportsHH2;
@property (readonly) HMDHomeKitVersion *derivedVersion;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *name;
@property (readonly, copy) HMDHomeKitVersion *version;
@property (copy) HMDRPIdentity *rpIdentity;
@property (readonly) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;

+ (id)logCategory;
+ (id)destinationForDevice:(id)a0 service:(id)a1;
+ (id)deviceWithDestination:(id)a0;
+ (id)deviceWithHandle:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithDeviceAddress:(id)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)handles;
- (BOOL)isEqual:(id)a0;
- (void)setVersion:(id)a0;
- (void)setHandles:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateVersion:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (id)initWithObjectModel:(id)a0;
- (BOOL)isBackingStorageEqual:(id)a0;
- (void)__handleAccountHandleUpdated:(id)a0;
- (void)__updateDeviceWithActions:(id)a0;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)deviceForIDSService:(id)a0;
- (id)globalDestination;
- (id)globalHandles;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 name:(id)a2 productInfo:(id)a3 version:(id)a4 capabilities:(id)a5;
- (id)initWithService:(id)a0 device:(id)a1;
- (BOOL)isPublishingOnObservedNetService;
- (BOOL)isRelatedToDevice:(id)a0;
- (BOOL)isSameAccountWithDevice:(id)a0;
- (id)localHandles;
- (id)modelBackedObjects;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)remoteDestinationString;
- (void)startObservingIsPublishingForService:(id)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateWithDevice:(id)a0;

@end
