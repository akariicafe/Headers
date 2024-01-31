@interface HFIrrigationSystemServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (unsigned long long)_typeForActiveState:(BOOL)a0 usageState:(long long)a1 programMode:(long long)a2;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;

- (long long)priority;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
