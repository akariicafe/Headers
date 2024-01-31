@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleSettings;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)settingsForRecord:(id)a0;

- (unsigned long long)hash;
- (id)makeRecord;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (BOOL)isEqual:(id)a0;

@end
