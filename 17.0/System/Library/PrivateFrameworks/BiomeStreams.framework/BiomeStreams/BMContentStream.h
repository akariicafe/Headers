@class NSString, BMStoreStream, BMContentSource;

@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
    BMContentSource *_contentSource;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisher;
- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)initWithStreamIdentifier:(id)a0;

@end
