@class NSString, NSDictionary;

@interface HomeKitEvents.QueryLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ numFetchedCKRecords;
    void /* unknown type, empty encoding */ totalCKRecordSize;
    void /* unknown type, empty encoding */ numCKQueries;
    void /* unknown type, empty encoding */ numCKQueriesSucceeded;
    void /* unknown type, empty encoding */ ckQueryCancelled;
    void /* unknown type, empty encoding */ ckQueryDroppedEvents;
    void /* unknown type, empty encoding */ ckQueryReachedLimit;
    void /* unknown type, empty encoding */ ckQueryTerminatedStream;
    void /* unknown type, empty encoding */ ckQueryResultNotHandled;
    void /* unknown type, empty encoding */ ckQueryResultProcessingEncounteredError;
    void /* unknown type, empty encoding */ ckQueryEncounteredError;
    void /* unknown type, empty encoding */ ckQueryExecutionStartTimeMs;
    void /* unknown type, empty encoding */ ckQueryExecutionEndTimeMs;
    void /* unknown type, empty encoding */ queryStartDate;
    void /* unknown type, empty encoding */ queryEndDate;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ scope;
    void /* unknown type, empty encoding */ queryType;
    void /* unknown type, empty encoding */ numProcessedEvents;
    void /* unknown type, empty encoding */ numIgnoredExpiredRecords;
    void /* unknown type, empty encoding */ numIgnoredNoCreationDateRecords;
    void /* unknown type, empty encoding */ numIgnoredNonUUIDNameRecords;
    void /* unknown type, empty encoding */ numEventsSavedToCache;
    void /* unknown type, empty encoding */ numEmittedEvents;
    void /* unknown type, empty encoding */ processingDroppedEvents;
    void /* unknown type, empty encoding */ processingReachedLimit;
    void /* unknown type, empty encoding */ processingTerminatedStream;
    void /* unknown type, empty encoding */ processingResultNotHandled;
    void /* unknown type, empty encoding */ processingEncounteredError;
    void /* unknown type, empty encoding */ cancelled;
    void /* unknown type, empty encoding */ succeeded;
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;

- (id)init;
- (void).cxx_destruct;

@end
