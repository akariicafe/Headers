@interface HVBudget : NSObject {
    unsigned int _alwaysAllowSourcesOverride;
    unsigned int _alwaysDenySourcesOverride;
    unsigned int _noServiceSources;
    unsigned int _periodicBackgroundSources;
    unsigned int _delayedBudgetedSources;
    unsigned int _budgetedSources;
    unsigned int _realtimeSources;
    unsigned int _extraBudgetSources;
    BOOL _ignoreDiscretionaryPowerBudget;
}

- (id)init;

@end
