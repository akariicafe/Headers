@class NSString, BMStoreStream;

@interface ATXBiomeProactiveSuggestionUIFeedbackResultStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)init;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)source;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1;

@end
