@class PXStorySongsConfiguration;

@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer>

@property (readonly, nonatomic) PXStorySongsConfiguration *songsConfiguration;
@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSongs:(id)a0;
- (id)initWithSongsConfiguration:(id)a0;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
