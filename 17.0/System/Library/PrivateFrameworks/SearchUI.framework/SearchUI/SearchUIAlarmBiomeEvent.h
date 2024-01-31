@class BMClockAlarm, NSString;

@interface SearchUIAlarmBiomeEvent : SearchUIBiomeEvent

@property (retain, nonatomic) BMClockAlarm *biomeEvent;
@property (retain, nonatomic) NSString *observedAlarmIdentifier;

+ (BOOL)supportsEvent:(id)a0 contextualAction:(id)a1;

- (void).cxx_destruct;
- (void)getEnabledStatusWithCompletion:(id /* block */)a0;
- (id)initWithEvent:(id)a0 contextualActon:(id)a1;

@end
