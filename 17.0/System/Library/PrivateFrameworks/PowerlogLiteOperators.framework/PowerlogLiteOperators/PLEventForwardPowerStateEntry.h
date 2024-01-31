@class NSArray;

@interface PLEventForwardPowerStateEntry : PLMultiKeyEntry

@property (readonly) short state;
@property (readonly) short event;
@property (readonly) NSArray *reason;
@property (readonly) BOOL isBasebandWake;

+ (id)entryKey;
+ (void)load;

- (id)initEntryWithIOMessage:(unsigned int)a0;
- (id)initEntryWithState:(short)a0 withEvent:(short)a1 withReason:(id)a2 withCurrentWakeTime:(unsigned long long)a3 withCurrentWakeTimeKey:(id)a4 withDate:(id)a5;
- (id)initEntryWithState:(short)a0 withEvent:(short)a1 withReason:(id)a2 withCurrentWakeTime:(unsigned long long)a3 withCurrentWakeTimeKey:(id)a4 withWakeType:(id)a5 withDriverWakeReason:(id)a6 withDate:(id)a7;
- (id)initEntryWithState:(short)a0 withEvent:(short)a1 withReason:(id)a2 withDate:(id)a3;
- (id)initEntryWithState:(short)a0 withEvent:(short)a1 withReason:(id)a2 withKernelSleepDate:(id)a3 withDate:(id)a4;

@end
