@class NSUUID, NSString, NSDate;

@interface SADevice : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *groupIdentifier;
@property (retain, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) long long partIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long vendorId;
@property (readonly, nonatomic) long long productId;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) BOOL notifyEnabled;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL isAppleAudioAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (BOOL)isReallyEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceUUID:(id)a0 groupIdentifier:(id)a1 macAddress:(id)a2 name:(id)a3 model:(id)a4 systemVersion:(id)a5 vendorId:(long long)a6 productId:(long long)a7 deviceType:(unsigned long long)a8 notifyEnabled:(BOOL)a9 isAppleAudioAccessory:(BOOL)a10 date:(id)a11;
- (id)initWithDeviceUUID:(id)a0 groupIdentifier:(id)a1 macAddress:(id)a2 partIdentifier:(long long)a3 name:(id)a4 model:(id)a5 systemVersion:(id)a6 vendorId:(long long)a7 productId:(long long)a8 deviceType:(unsigned long long)a9 notifyEnabled:(BOOL)a10 isAppleAudioAccessory:(BOOL)a11 date:(id)a12;
- (id)initWithDeviceUUID:(id)a0 name:(id)a1 model:(id)a2 systemVersion:(id)a3 vendorId:(long long)a4 productId:(long long)a5 deviceType:(unsigned long long)a6 notifyEnabled:(BOOL)a7 isAppleAudioAccessory:(BOOL)a8 date:(id)a9;

@end
