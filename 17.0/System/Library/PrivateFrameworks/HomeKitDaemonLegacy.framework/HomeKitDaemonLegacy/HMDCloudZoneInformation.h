@class NSUUID, NSString;

@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic, getter=didFetchFailed) BOOL fetchFailed;
@property (nonatomic, getter=isFirstFetch) BOOL firstFetch;
@property (nonatomic, getter=isZoneCreated) BOOL zoneCreated;
@property (nonatomic) long long schemaVersion;
@property (nonatomic, getter=doesHandlesCloudRecord) BOOL handlesCloudRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)cloudZoneInformationWithCloudZones:(id)a0;
+ (id)cloudZonesArrayWithCloudZones:(id)a0;
+ (id)cloudZonesWithDictionary:(id)a0;

- (id)init;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)emptyModelObjectWithChangeType:(unsigned long long)a0 parent:(id)a1;
- (id)initWithOwnerName:(id)a0 uuid:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 parent:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1 parent:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateCloudZoneInformationWithModel:(id)a0 message:(id)a1;

@end
