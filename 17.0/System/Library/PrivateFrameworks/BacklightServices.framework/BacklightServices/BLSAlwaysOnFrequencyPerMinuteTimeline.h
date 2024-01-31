@class NSCalendar;

@interface BLSAlwaysOnFrequencyPerMinuteTimeline : BLSAlwaysOnTimeline {
    NSCalendar *_calendar;
    long long _frequencyPerMinute;
}

- (void).cxx_destruct;
- (id)unconfiguredEntriesForDateInterval:(id)a0 previousEntry:(id)a1;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)a0 withPreviousEntry:(id)a1;
- (id)initWithPerMinuteUpdateFrequency:(long long)a0 identifier:(id)a1 configure:(id /* block */)a2;

@end
