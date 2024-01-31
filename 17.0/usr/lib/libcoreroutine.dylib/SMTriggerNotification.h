@class NSString, NSDictionary, NSDate;

@interface SMTriggerNotification : RTNotification

@property (readonly, nonatomic) unsigned long long triggerCategory;
@property (readonly, nonatomic) unsigned long long SOSState;
@property (readonly, nonatomic) NSString *triggerName;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDictionary *details;

+ (id)triggerSOSCategoryToString:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTriggerCategory:(unsigned long long)a0 SOSState:(unsigned long long)a1 triggerName:(id)a2 date:(id)a3 details:(id)a4;

@end
