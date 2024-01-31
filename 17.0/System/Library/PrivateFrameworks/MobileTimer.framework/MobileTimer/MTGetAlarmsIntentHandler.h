@class NSString;

@interface MTGetAlarmsIntentHandler : MTAlarmIntentHandler <MTGetAlarmsIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmGetAlarms:(id)a0 completion:(id /* block */)a1;
- (void)handleGetAlarms:(id)a0 completion:(id /* block */)a1;

@end
