@class NSString, NSNumber;

@interface SnoozeAlarmHalIntent : INIntent

@property (nonatomic, copy) NSString *alarmId;
@property (nonatomic, copy) NSString *remoteDeviceId;
@property (nonatomic, copy) NSString *remoteExecutionId;
@property (nonatomic, retain) NSNumber *skipConfirmation;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
