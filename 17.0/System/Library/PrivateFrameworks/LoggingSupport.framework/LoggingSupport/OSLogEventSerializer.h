@class _OSLogEventSerializationMetadata, NSObject, NSPredicate, OSLogEventStream, NSMutableArray, OSLogEventSource;
@protocol OS_dispatch_queue;

@interface OSLogEventSerializer : NSObject

@property (readonly, nonatomic) OSLogEventSource *source;
@property (readonly, nonatomic) OSLogEventStream *stream;
@property (nonatomic) unsigned long long curBatchSize;
@property (readonly, nonatomic) NSMutableArray *curBatchDictionaries;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property (nonatomic) unsigned long long maxLogEventBatchSize;
@property (copy, nonatomic) id /* block */ argumentRedactionBlock;
@property (readonly, nonatomic) unsigned long long serializedEventCount;

- (id)_dictForDecomposedMessage:(id)a0 indicesToRedact:(id)a1;
- (void)invalidate;
- (void)_completeBatch:(id /* block */)a0;
- (id)_dictForDecomposedMessage:(id)a0 index:(unsigned long long)a1 shouldRedact:(BOOL)a2;
- (void)serializeFromDate:(id)a0;
- (void)serializeFromDate:(id)a0 toDate:(id)a1;
- (void)serializeFromPosition:(id)a0;
- (void).cxx_destruct;
- (id)_dictForPlaceholder:(id)a0;
- (id)_dictionaryForProxy:(id)a0;
- (void)serializeFromLastBoot;
- (id)_arrayForDecomposedMessage:(id)a0 indicesToRedact:(id)a1;
- (void)_serializeEvent:(id)a0;
- (id)initWithSource:(id)a0 dataProcessingBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)_dictForArg:(id)a0 shouldRedactValue:(BOOL)a1;
- (BOOL)_isBatchCompleted;

@end
