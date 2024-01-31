@class NSString, BMStoreStream;

@interface ATXBiomeSuggestedHomePageStream : NSObject <BMStream, BMSourceStream>

@property (retain, nonatomic) BMStoreStream *inner;
@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)init;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)source;

@end
