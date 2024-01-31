@interface HFIrrigationValveServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (unsigned long long)_typeForSystemActiveState:(BOOL)a0 usageState:(long long)a1;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;

- (long long)priority;
- (BOOL)isTransitioning;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
