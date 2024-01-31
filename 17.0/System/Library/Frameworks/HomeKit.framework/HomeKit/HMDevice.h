@class NSUUID, NSString, HMFProductInfo, HMFKey, NSArray;

@interface HMDevice : NSObject <HMFObject, HMFLogging, HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (copy) NSString *name;
@property (copy) HMFProductInfo *productInfo;
@property BOOL supportsHH2;
@property (copy) HMFKey *rapportIRK;
@property (copy) NSUUID *idsIdentifier;
@property (copy) NSString *idsDestination;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)IDSDestinationForIDSService:(id)a0;
- (id)IDSDeviceForIDSService:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 isCurrentDevice:(BOOL)a2;
- (BOOL)mergeFromNewObject:(id)a0;

@end
