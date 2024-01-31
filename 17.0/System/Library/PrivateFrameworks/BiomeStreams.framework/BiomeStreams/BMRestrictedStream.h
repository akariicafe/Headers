@class NSString, BMStoreStream;

@interface BMRestrictedStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)remoteDevices;
- (id)initWithIdentifier:(id)a0 segmentSize:(unsigned long long)a1 pruningPolicy:(id)a2;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)initWithIdentifier:(id)a0;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)init;
- (id)initWithIdentifier:(id)a0 segmentSize:(unsigned long long)a1 pruningPolicy:(id)a2 eventDataClass:(Class)a3;
- (id)initWithIdentifier:(id)a0 eventDataClass:(Class)a1;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 segmentSize:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)source;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;

@end
