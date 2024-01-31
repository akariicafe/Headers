@class NSUUID, NSString, SPKeySyncRecord;

@interface SPSimpleBeacon : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) BOOL connectionAllowed;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) double txPower;
@property (copy, nonatomic) NSUUID *productUUID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) long long batteryLevel;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) SPKeySyncRecord *keySyncRecord;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInternalSimpleBeacon:(id)a0;

@end
