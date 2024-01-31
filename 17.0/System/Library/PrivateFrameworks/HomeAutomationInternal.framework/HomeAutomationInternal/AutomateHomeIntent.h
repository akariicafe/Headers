@class NSString, TriggerCondition, Automatable;

@interface AutomateHomeIntent : INIntent

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) TriggerCondition *trigger;
@property (nonatomic, retain) Automatable *automatableTask;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
