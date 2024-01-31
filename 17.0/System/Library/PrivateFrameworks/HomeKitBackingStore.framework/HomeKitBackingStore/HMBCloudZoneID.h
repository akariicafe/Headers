@class NSString, CKRecordZoneID, NSData;

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectStorage, HMBLocalZoneID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 zoneID:(id)a2 name:(id)a3 modelID:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 zoneID:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
