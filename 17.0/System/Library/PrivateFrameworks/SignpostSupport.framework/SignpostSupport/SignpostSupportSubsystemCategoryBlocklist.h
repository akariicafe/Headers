@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter

- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (id)initWithEntries:(id)a0;
- (unsigned long long)_compoundPredicateType;
- (void)addBlocklist:(id)a0;
- (id)liveStreamingPredicate;

@end
