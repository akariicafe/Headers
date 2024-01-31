@class NSString;

@interface ATXScorableTimeATXActivityTypeWrapper : NSObject <ATXScorableTimePeriodProtocol>

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithActivityType:(unsigned long long)a0;

@end
