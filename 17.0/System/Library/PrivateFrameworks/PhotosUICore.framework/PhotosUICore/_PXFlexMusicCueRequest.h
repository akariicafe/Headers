@class PXFlexMusicAsset;

@interface _PXFlexMusicCueRequest : NSObject

@property (readonly, nonatomic) PXFlexMusicAsset *asset;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 resultHandler:(id /* block */)a1;

@end
