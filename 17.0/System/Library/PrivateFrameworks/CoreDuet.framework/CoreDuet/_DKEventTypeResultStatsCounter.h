@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventName;
- (id)eventType;
- (void).cxx_destruct;
- (id)typeValues;

@end
