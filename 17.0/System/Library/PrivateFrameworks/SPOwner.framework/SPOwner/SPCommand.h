@class NSUUID, SPHandle, NSString, NSDate, NSNumber;

@interface SPCommand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSNumber *duration;
@property (nonatomic) long long playSoundContext;
@property (copy, nonatomic) SPHandle *handle;
@property (copy, nonatomic) NSString *lostModeEmail;
@property (copy, nonatomic) NSString *lostModeMessage;
@property (copy, nonatomic) NSString *lostModePhoneNumber;
@property (copy, nonatomic) NSString *obfuscatedIdentifier;
@property (nonatomic) BOOL enableLostMode;
@property (readonly, copy, nonatomic) NSString *taskName;

+ (id)locate:(id)a0;
+ (id)beginLeashingWithBeaconUUID:(id)a0;
+ (id)connectToBeaconUUID:(id)a0;
+ (id)disableLostModeForBeaconUUID:(id)a0;
+ (id)disableNotifyWhenFound:(id)a0;
+ (id)disconnectFromBeaconUUID:(id)a0;
+ (id)enableLostModeForBeaconUUID:(id)a0 message:(id)a1 phoneNumber:(id)a2 email:(id)a3;
+ (id)enableNotifyWhenFound:(id)a0;
+ (id)endLeashingWithBeaconUUID:(id)a0;
+ (id)playSoundWithBeaconUUID:(id)a0;
+ (id)playSoundWithBeaconUUID:(id)a0 duration:(double)a1;
+ (id)playSoundWithBeaconUUID:(id)a0 withContext:(long long)a1;
+ (id)setObfuscatedIdentifier:(id)a0;
+ (id)startBTFindingWithBeaconUUID:(id)a0;
+ (id)startNotifyWhenFound:(id)a0;
+ (id)stopBTFindingWithBeaconUUID:(id)a0;
+ (id)stopNotifyWhenFound:(id)a0;
+ (id)stopSoundWithBeaconUUID:(id)a0;
+ (id)unpairWithBeaconUUID:(id)a0;
+ (id)updateAccessoryFirmware:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeaconUUID:(id)a0 type:(long long)a1 expiration:(id)a2 duration:(id)a3 handle:(id)a4 lostModeEmail:(id)a5 lostModeMessage:(id)a6 lostModePhoneNumber:(id)a7 obfuscatedIdentifier:(id)a8 identifier:(id)a9;
- (id)initWithBeaconUUID:(id)a0 type:(long long)a1 expiration:(id)a2 duration:(id)a3 handle:(id)a4 lostModeMessage:(id)a5 lostModePhoneNumber:(id)a6 obfuscatedIdentifier:(id)a7;
- (id)initWithBeaconUUID:(id)a0 type:(long long)a1 expiration:(id)a2 duration:(id)a3 playSoundContext:(long long)a4 handle:(id)a5 lostModeMessage:(id)a6 lostModePhoneNumber:(id)a7 obfuscatedIdentifier:(id)a8 identifier:(id)a9;

@end
