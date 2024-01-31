@protocol PXStoryViewLayoutSpec, PXStoryStyleDescriptor;

@interface _PXStoryStyleChromePreloadingRecord : NSObject

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) id<PXStoryStyleDescriptor> styleInfo;
@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayScale:(double)a0 styleInfo:(id)a1 viewLayoutSpec:(id)a2;

@end
