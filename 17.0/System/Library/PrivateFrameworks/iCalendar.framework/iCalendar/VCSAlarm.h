@class NSString, VCSDate;

@interface VCSAlarm : VCSEntity

@property (readonly, nonatomic) unsigned long long alarmType;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) VCSDate *triggerDate;
@property (readonly, nonatomic) double triggerDuration;

+ (id)_componentsWithISO8601DurationString:(id)a0;

- (unsigned long long)entityType;
- (void).cxx_destruct;
- (id)dictify;
- (void)ensureRelativeAlarmWithStartDate:(id)a0;
- (id)initWithLine:(id)a0 parseState:(id)a1 property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)a2;

@end
