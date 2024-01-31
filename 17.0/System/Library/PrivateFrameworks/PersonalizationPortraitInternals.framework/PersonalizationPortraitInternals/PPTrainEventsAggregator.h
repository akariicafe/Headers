@interface PPTrainEventsAggregator : PPEventsAggregator

- (BOOL)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (id)tripCandidatesFromEventsPool;

@end
