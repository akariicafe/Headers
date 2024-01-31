@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable>

@property (readonly, copy, nonatomic) NSArray *preferredLanguages;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) long long utcOffset;
@property (readonly, nonatomic) long long dstOffset;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (readonly, copy, nonatomic) NSString *osVersion;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *formatVersion;
@property (readonly, copy, nonatomic) NSString *seedNumber;
@property (readonly, copy, nonatomic) NSString *buildNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDeviceInfoWithAppVersion:(id)a0;
+ (id)defaultDeviceInfo;
+ (id)defaultDeviceInfoWithAppVersion:(id)a0 formatVersion:(id)a1;
+ (id)defaultDeviceInfoWithAppVersion:(id)a0 formatVersion:(id)a1 seedNumber:(id)a2 buildNumber:(id)a3;

- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5 countryCode:(id)a6;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5 countryCode:(id)a6 formatVersion:(id)a7;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5 countryCode:(id)a6 formatVersion:(id)a7 seedNumber:(id)a8 buildNumber:(id)a9;
- (BOOL)isEqual:(id)a0;

@end
