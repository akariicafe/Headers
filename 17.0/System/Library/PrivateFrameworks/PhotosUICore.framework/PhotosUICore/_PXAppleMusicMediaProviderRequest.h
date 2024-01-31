@class PXAppleMusicAsset, PXAudioRequestOptions;

@interface _PXAppleMusicMediaProviderRequest : NSObject

@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) PXAppleMusicAsset *asset;
@property (readonly, nonatomic) PXAudioRequestOptions *options;
@property (nonatomic) long long signpostID;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 options:(id)a1 requestID:(long long)a2 resultHandler:(id /* block */)a3;

@end
