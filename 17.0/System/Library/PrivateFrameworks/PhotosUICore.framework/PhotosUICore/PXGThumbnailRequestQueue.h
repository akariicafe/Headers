@interface PXGThumbnailRequestQueue : NSObject {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) struct PXGThumbnailRequest { void *x0; void *x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; } *requests;

- (id)init;
- (void)removeAllRequests;
- (void)dealloc;
- (void)enqueueRequestsWithItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textureRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 displayAssetFetchResult:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 applyCleanApertureCrop:(BOOL)a4 mediaProvider:(id)a5;
- (void)sortRequests;
- (id)description;

@end
