@interface HomeKitEvents.CloudKitQueryLogEvent : HMMLogEvent {
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ numFetchedRecords;
    void /* unknown type, empty encoding */ totalRecordSize;
}

- (id)init;
- (void).cxx_destruct;

@end
