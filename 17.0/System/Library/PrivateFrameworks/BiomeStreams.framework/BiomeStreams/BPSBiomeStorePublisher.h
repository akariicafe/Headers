@class NSString, BMStreamDatastoreReader, BMStoreEnumerator, BMStoreBookmark, BMAccessClient;

@interface BPSBiomeStorePublisher : BMBookmarkablePublisher {
    double _startTime;
    double _endTime;
    unsigned long long _maxEvents;
    unsigned long long _lastEventCount;
    BOOL _reversed;
    BMStoreBookmark *_bookmark;
    BMAccessClient *_accessClient;
    BMStreamDatastoreReader *_streamDatastoreReader;
}

@property (retain, nonatomic) BMStoreEnumerator *enumerator;
@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) NSString *streamId;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2 eventDataClass:(Class)a3;
- (id)nextEvent;
- (id)withMaxEvents:(unsigned long long)a0;
- (id)initWithStreamDatastoreReader:(id)a0 streamsAccessClient:(id)a1;
- (id)withBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)reverse;
- (id)withEndTime:(double)a0;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (id)_newEnumerator;
- (id)initWithStreamId:(id)a0 storeConfig:(id)a1 streamsAccessClient:(id)a2;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (id)withLastEvents:(unsigned long long)a0;
- (id)withStartTime:(double)a0;

@end
