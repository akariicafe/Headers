@class DNDScheduleTimePeriod, NSDate;

@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
    NSDate *_creationdate;
}

@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod;
@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleTrigger;
+ (id)triggerWithClientTrigger:(id)a0 creationDate:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimePeriod:(id)a0 creationDate:(id)a1 enabledSetting:(unsigned long long)a2;
- (id)initWithTimePeriod:(id)a0 enabledSetting:(unsigned long long)a1;

@end
