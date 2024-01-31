@interface BLSHEnvironmentPerformEventData : NSObject

@property (readonly, nonatomic) long long stateMachineOldBacklightState;
@property (readonly, nonatomic) long long eventPreviousBacklightState;
@property (readonly, nonatomic) long long eventNewBacklightState;
@property (readonly, nonatomic) unsigned long long startedTime;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStateMachineOldBacklightState:(long long)a0 eventPreviousBacklightState:(long long)a1 eventNewBacklightState:(long long)a2;

@end
