@class NSUUID, NSString, NSData, NSDate;

@interface TASPAdvertisement : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *advertisementData;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, copy, nonatomic) NSData *reserved;
@property (readonly, nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSDate *scanDate;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly) BOOL beepOnMoveHigh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TASPAdvertisementTypeToString:(unsigned long long)a0;
+ (id)TASPAdvertisementDeviceTypeToString:(unsigned long long)a0;

- (unsigned long long)getType;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (unsigned long long)getDeviceType;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)initWithAddress:(id)a0 advertisementData:(id)a1 status:(unsigned char)a2 reserved:(id)a3 rssi:(long long)a4 scanDate:(id)a5 uuid:(id)a6;
- (BOOL)hasHawkeyeAdvertisementPolicy;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasHawkeyeLowEnergyAdvertisementPolicy;
- (id)initWithAddress:(id)a0 advertisementData:(id)a1 status:(unsigned char)a2 reserved:(id)a3 rssi:(long long)a4 scanDate:(id)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
