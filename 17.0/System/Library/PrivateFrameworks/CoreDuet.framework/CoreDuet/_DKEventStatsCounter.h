@class _DKEventStatsCounterInternal;

@interface _DKEventStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventName;
- (void).cxx_destruct;

@end
