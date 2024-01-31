@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (id)eventPredicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)identifier;
- (id)eligibleForPredictionKey;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)predicate;

@end
