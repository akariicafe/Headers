@class NSString, BMRestrictedStream;

@interface BMSocialHighlightFeedbackStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream, BMStreamDeleting> {
    BMRestrictedStream *_stream;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)remoteDevices;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisher;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)init;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)initWithPruningPolicy:(id)a0;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)source;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)deleteEventsWithPredicate:(id /* block */)a0;

@end
