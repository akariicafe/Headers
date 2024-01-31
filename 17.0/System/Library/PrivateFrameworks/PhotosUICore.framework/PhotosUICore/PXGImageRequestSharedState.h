@class PXMediaProvider;
@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver, PXGDisplayAssetAdjustment;

@interface PXGImageRequestSharedState : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssetFetchResult;
@property (readonly, nonatomic) id<PXGDisplayAssetRequestObserver> observer;
@property (readonly, nonatomic) unsigned long long presentationStyles;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (readonly, nonatomic) unsigned long long intent;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) BOOL useLowMemoryDecode;
@property (readonly, nonatomic) BOOL applyCleanApertureCrop;

- (id)initWithDisplayAssetFetchResult:(id)a0 observer:(id)a1 presentationStyles:(unsigned long long)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 adjustment:(id)a5 intent:(unsigned long long)a6 useLowMemoryDecode:(BOOL)a7 applyCleanApertureCrop:(BOOL)a8 mediaProvider:(id)a9;
- (void).cxx_destruct;

@end
