@interface HDMCDeviceInfo : NSObject <NSCopying>

@property (readonly, nonatomic) long long dayStreamProcessorAlgorithmVersion;
@property (readonly, nonatomic) BOOL menstruationNotificationsEnabled;
@property (readonly, nonatomic) BOOL fertileWindowNotificationsEnabled;
@property (readonly, nonatomic) BOOL someNotificationsEnabled;

+ (id)deviceInfoFromStorageGroup:(id)a0;
+ (id)localDeviceInfoWithSettingsManager:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDayStreamProcessorAlgorithmVersion:(long long)a0 menstruationNotificationsEnabled:(BOOL)a1 fertileWindowNotificationsEnabled:(BOOL)a2;

@end
