@class NSString, NSDictionary;

@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long sourceDeviceDataSize;
@property (nonatomic) unsigned long long targetDeviceFreeSpaceSize;
@property (nonatomic) unsigned long long sourcePurgeableSpaceSize;
@property (retain, nonatomic) NSString *activeAppleID;
@property (retain, nonatomic) NSDictionary *appleIDs;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
