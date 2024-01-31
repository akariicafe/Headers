@interface HomeKitEvents.EventsAsyncSequenceLogEvent : HMMLogEvent {
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ emittedEvents;
    void /* unknown type, empty encoding */ cachedEvents;
    void /* unknown type, empty encoding */ processedRecords;
}

- (id)init;
- (void).cxx_destruct;

@end
