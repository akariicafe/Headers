@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleMTUpdateAlarm:(id)a0 completion:(id /* block */)a1;
- (id)_alarmUserActivityWithIntent:(id)a0;
- (void)confirmMTUpdateAlarm:(id)a0 completion:(id /* block */)a1;

@end
