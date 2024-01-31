@class NSString, TLAlertConfiguration, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) double maxDuration;
@property (nonatomic, getter=isRepeating) BOOL repeats;
@property (copy, nonatomic) NSString *ringtoneName;
@property (nonatomic) long long soundType;
@property (copy, nonatomic) NSDictionary *vibrationPattern;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) unsigned int systemSoundID;
@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL ignoreRingerSwitch;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;

- (unsigned long long)hash;
- (id)initWithToneAlertConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)description;
- (id)initWithToneAlert:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithToneAlert:(long long)a0 accountIdentifier:(id)a1;
- (id)initWithToneAlert:(long long)a0 accountIdentifier:(id)a1 ignoreRingerSwitch:(BOOL)a2;
- (id)initWithToneAlert:(long long)a0 accountIdentifier:(id)a1 toneIdentifier:(id)a2 vibrationIdentifier:(id)a3 ignoreRingerSwitch:(BOOL)a4;
- (id)initWithToneAlert:(long long)a0 ignoreRingerSwitch:(BOOL)a1;
- (id)initWithToneAlert:(long long)a0 toneIdentifier:(id)a1 vibrationIdentifier:(id)a2;
- (id)initWithToneAlert:(long long)a0 toneIdentifier:(id)a1 vibrationIdentifier:(id)a2 ignoreRingerSwitch:(BOOL)a3;

@end
