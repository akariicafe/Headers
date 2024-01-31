@class NSArray, AlarmSearch;

@interface SearchAlarmIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic) long long alarmSearchType;
@property (nonatomic, copy) NSArray *alarms;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
