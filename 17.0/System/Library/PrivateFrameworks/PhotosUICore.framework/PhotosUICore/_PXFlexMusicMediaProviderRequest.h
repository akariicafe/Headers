@class PXAudioRequestOptions, PXFlexMusicAsset;

@interface _PXFlexMusicMediaProviderRequest : NSObject

@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) PXFlexMusicAsset *asset;
@property (readonly, nonatomic) PXAudioRequestOptions *options;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 options:(id)a1 requestID:(long long)a2 resultHandler:(id /* block */)a3;

@end
