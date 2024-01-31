@interface PXAppleMusicImageProvider : PXAudioAssetImageProvider

- (id)createImageLoaderForRequest:(id)a0;
- (id)imageCacheKeyForRequest:(id)a0;
- (id)imageLoaderCoalescingKeyForRequest:(id)a0;
- (id)resultForCompletedImageLoader:(id)a0 request:(id)a1 error:(id *)a2;

@end
