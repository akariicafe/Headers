@class NSString;

@interface WFToggleAlarmContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *alarmIdentifier;
@property (readonly, copy, nonatomic) NSString *alarmName;
@property (readonly, nonatomic) unsigned long long operation;

+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 alarmData:(id)a2 operation:(unsigned long long)a3;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 operation:(unsigned long long)a2;
- (id)settingBiomeStreamIdentifier;
- (BOOL)showsUserInterfaceWhenRunning;

@end
