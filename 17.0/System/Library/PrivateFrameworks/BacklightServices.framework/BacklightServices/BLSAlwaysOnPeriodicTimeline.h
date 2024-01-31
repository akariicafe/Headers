@class NSDate;

@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline {
    double _periodicInterval;
    NSDate *_periodicStart;
}

- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:(id)a0 previousEntry:(id)a1;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)a0 withPreviousEntry:(id)a1;
- (id)initWithUpdateInterval:(double)a0 startDate:(id)a1 identifier:(id)a2 configure:(id /* block */)a3;

@end
