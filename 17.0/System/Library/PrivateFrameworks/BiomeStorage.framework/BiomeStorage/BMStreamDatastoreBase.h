@class BMSegmentManager, NSString, BMFrameStore, BMFileManager, BMPruningPolicy, BMStreamMetadata, BMStoreConfig;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastoreBase : NSObject <BMSegmentManagerDelegate, BMFileManagerDelegate> {
    BMFileManager *_fileManager;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _biomeLibrary;
}

@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) unsigned long long permission;
@property (readonly, nonatomic) unsigned long long maxFileSize;
@property (readonly, nonatomic) NSString *streamPath;
@property (readonly, nonatomic) NSString *remoteStreamName;
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) BMSegmentManager *segmentManager;
@property (readonly, copy, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BOOL isDataAccessible;
@property (readonly, nonatomic) BMStreamMetadata *metadata;
@property (readonly, nonatomic) BMStoreConfig *config;
@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outEventSize:(unsigned long long *)a2 outBookmark:(id *)a3;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (id)initWithStream:(id)a0 permission:(unsigned long long)a1 config:(id)a2;
- (id)newEnumeratorFromBookmark:(id)a0;
- (id)fetchEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2;
- (BOOL)writeEventBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3 outBookmark:(id *)a4;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3 eventDataClass:(Class)a4 useCase:(id)a5;
- (void)fetchEventFromFrameStore:(id)a0 atOffset:(unsigned long long)a1 withOptions:(unsigned long long)a2 callback:(id /* block */)a3;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 options:(unsigned long long)a2;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outEventSize:(unsigned long long *)a2;
- (BOOL)verifyStreamHealthFrom:(double)a0 to:(double)a1 error:(id *)a2;
- (BOOL)writeEventWithEventBody:(id)a0;
- (id)_bookmarkWithSegmentName:(id)a0 offset:(unsigned long long)a1 datastoreVersion:(unsigned int)a2;
- (BOOL)updateMetadata:(Class)a0;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (BOOL)saveMetadata:(id)a0;
- (id)segmentWithFilename:(id)a0 error:(id *)a1;
- (id)newEnumeratorFromStartTime:(double)a0 options:(unsigned long long)a1;
- (id)loadMetadata;
- (long long)cachingOptionsForFileHandleWithAttributes:(id)a0;
- (BOOL)writeEventBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (void)pruneStreamToMaxSegmentAge:(double)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 pruneFutureEvents:(BOOL)a3 shouldDeleteUsingBlock:(id /* block */)a4;
- (id)newEnumeratorFromBookmark:(id)a0 options:(unsigned long long)a1;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)segmentContainingTimestamp:(double)a0;
- (BOOL)writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2;
- (void)didMarkFrameAsRemovedWithSegmentName:(id)a0 frame:(id)a1 reason:(unsigned long long)a2 outTombstoneBookmark:(id *)a3;
- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1 outBookmark:(id *)a2;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 pruneFutureEvents:(BOOL)a3 usingBlock:(id /* block */)a4;
- (id)metadataPath;
- (BOOL)verifyStreamHealthFromV2:(double)a0 to:(double)a1 frameStore:(id)a2 error:(id *)a3;
- (id)segmentNames;
- (BOOL)writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (BOOL)verifyStreamHealthFromV1:(double)a0 to:(double)a1 frameStore:(id)a2 error:(id *)a3;
- (void)syncMappedFiles;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)enumerateEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (Class)eventBodyClass;
- (id)initWithStream:(id)a0 streamPath:(id)a1 permission:(unsigned long long)a2 config:(id)a3;
- (void)pruneStreamToMaxStreamSizeInBytes:(unsigned long long)a0;
- (id)newEnumeratorFromStartTime:(double)a0;
- (BOOL)isTombstone;
- (BOOL)updateMetadata:(Class)a0 pruningPolicy:(id)a1;
- (void)segmentManager:(id)a0 willDeleteSegmentName:(id)a1 frameStore:(id)a2;
- (void).cxx_destruct;

@end
