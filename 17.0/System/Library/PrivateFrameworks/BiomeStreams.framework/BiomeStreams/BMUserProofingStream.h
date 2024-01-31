@class NSString, BMRestrictedStream;

@interface BMUserProofingStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMRestrictedStream *_stream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisher;
- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)deleteEventsWithPredicate:(id /* block */)a0;

@end
