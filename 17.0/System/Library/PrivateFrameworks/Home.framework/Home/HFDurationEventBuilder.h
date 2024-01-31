@interface HFDurationEventBuilder : HFEventBuilder

@property (nonatomic) double duration;

- (id)initWithEvent:(id)a0;
- (id)eventType;
- (id)description;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)a0;
- (id)comparisonKey;

@end
