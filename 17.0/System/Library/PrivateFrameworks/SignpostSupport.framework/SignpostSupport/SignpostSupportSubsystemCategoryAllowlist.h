@interface SignpostSupportSubsystemCategoryAllowlist : SignpostSupportSubsystemCategoryFilter

- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (void)addAllowlist:(id)a0;
- (id)initWithEntries:(id)a0;
- (unsigned long long)_compoundPredicateType;

@end
