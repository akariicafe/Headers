@class CNCache, NSString;
@protocol CNScheduler;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider>

@property (readonly, nonatomic) id<CNScheduler> resourceLock;
@property (readonly, nonatomic) CNCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)_cnui_likenessType;
- (void).cxx_destruct;
- (struct CGImage { } *)_cnui_circularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_cnui_roundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderCircularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderRoundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
