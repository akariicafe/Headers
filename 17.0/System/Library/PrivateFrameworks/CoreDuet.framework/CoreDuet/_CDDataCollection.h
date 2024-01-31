@class NSString, _CDDataCollectionSession, _CDEventStreamsRegister, NSDate, NSObject;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDDataCollection : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDDataCollectionSession *_session;
    double _samplingRate;
    unsigned long long _daysPerBatch;
    unsigned long long _maxBatches;
    _CDEventStreamsRegister *_eventStreamsRegister;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> storage;
@property (copy, nonatomic) id /* block */ submissionBlock;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0 activity:(id)a1;
- (id)initWithStorage:(id)a0 activity:(id)a1 sessionPath:(id)a2 dataDirectory:(id)a3 collectionDate:(id)a4 samplingRate:(double)a5 daysPerBatch:(unsigned long long)a6 eventStreams:(id)a7 maxBatches:(unsigned long long)a8;

@end
