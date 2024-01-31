@interface CACUserHintsManager : NSObject {
    double _lastPruneTime;
}

+ (id)sharedManager;

- (id)init;
- (void)clearHistory;
- (unsigned long long)_countAfterRegisteringUserHintIdentifier:(id)a0;
- (BOOL)shouldDisplayUserHintAfterRegisteringIdentifier:(id)a0;
- (id)suggestedCommandIdentifiersFromActiveCommandIdentifiers:(id)a0 maximumCount:(long long)a1;

@end
