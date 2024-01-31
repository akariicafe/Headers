@class NSString;

@interface PXSampleInboxMediaProvider : NSObject <PXInboxModelMediaProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mockImage;

- (void)cancelImageRequest:(int)a0;
- (int)requestImageForPreviewItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 resultHandler:(id /* block */)a2;

@end
