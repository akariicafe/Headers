@class NSString, NSUUID, NSDictionary, NSData;

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *modelDescription;
@property (nonatomic) BOOL unlockEnabled;
@property (nonatomic) BOOL bluetoothCloudPaired;
@property (retain, nonatomic) NSUUID *bluetoothID;
@property (copy, nonatomic) NSUUID *proxyBluetoothID;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSDictionary *results;
@property (retain, nonatomic) NSData *hintToken;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL supportsAlwaysDirect;
@property (nonatomic) BOOL supportsApproveWithWatch;
@property (nonatomic) BOOL supportsApproveIcon;
@property (nonatomic) BOOL supportsEncryption;
@property (nonatomic) BOOL supportsAdvertisingUnlocked;
@property (nonatomic) BOOL supportsConnectionCache;
@property (nonatomic) BOOL supportsHEIC;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic) BOOL keyExists;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
