@class NSArray;

@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline {
    NSArray *_explicitEntries;
}

- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:(id)a0 previousEntry:(id)a1;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)a0 withPreviousEntry:(id)a1;
- (id)initWithEntries:(id)a0 identifier:(id)a1 configure:(id /* block */)a2;

@end
