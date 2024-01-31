@class PXImageRequestOptions;
@protocol PXDisplayAsset;

@interface _PXAudioAssetImageProviderRequest : NSObject <PXAudioAssetImageProviderRequest>

@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic) long long requestID;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) PXImageRequestOptions *options;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 requestID:(long long)a5 signpostID:(unsigned long long)a6;

@end
