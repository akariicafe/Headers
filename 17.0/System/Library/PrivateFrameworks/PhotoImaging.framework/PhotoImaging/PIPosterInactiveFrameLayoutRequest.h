@class PFPosterOrientedLayout;
@protocol PISegmentationItem;

@interface PIPosterInactiveFrameLayoutRequest : NURenderRequest

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSegmentationItem:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
