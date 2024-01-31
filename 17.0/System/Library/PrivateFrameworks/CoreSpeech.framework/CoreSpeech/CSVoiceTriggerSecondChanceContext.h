@interface CSVoiceTriggerSecondChanceContext : NSObject

@property (nonatomic) unsigned long long secondChanceHotTillMachTime;

- (id)initWithWindowStartTime:(unsigned long long)a0;
- (BOOL)shouldRunAsSecondChance;

@end
