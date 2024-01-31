@class NSString, BMStoreStream;

@interface ATXContextHeuristicsBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)source;

@end
