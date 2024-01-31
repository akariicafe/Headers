@class _OSLogEventSerializationMetadata, NSArray, NSEnumerator, NSDate;
@protocol OSLogEventDeserializerDataSourceDelegate;

@interface OSLogDeserializedEventStream : OSLogEventStreamBase

@property (nonatomic) BOOL hasActivated;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (readonly, nonatomic) id<OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate;
@property (readonly, nonatomic) NSArray *curEventArray;
@property (readonly, nonatomic) NSEnumerator *eventDictionaryEnumerator;
@property (readonly, nonatomic) NSDate *firstDate;
@property (readonly, nonatomic) NSDate *lastDate;

- (id)initWithDataSourceDelegate:(id)a0;
- (void)_runInvalidationHandler:(unsigned long long)a0;
- (void)_iterateThroughEventsWithProxy:(id)a0 filter:(id)a1 startingDate:(id)a2;
- (void)activate;
- (void).cxx_destruct;
- (id)_nextEventDictionary;
- (void)_updateEventArray;
- (id)_eventArrayFromData:(id)a0;
- (void)activateStreamFromDate:(id)a0;

@end
