@class SXMosaicGalleryColumnLayout, NSMutableArray, NSArray;
@protocol SXMosaicGalleryLayouterDataSource;

@interface SXMosaicGalleryLayouter : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout;
@property (readonly, nonatomic) NSMutableArray *layouts;
@property (readonly, nonatomic) NSMutableArray *clusters;
@property (readonly, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) NSMutableArray *views;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (nonatomic) double width;
@property (readonly, nonatomic) NSArray *supportedTileTypeClusters;
@property (readonly, nonatomic) NSMutableArray *frames;
@property (nonatomic) BOOL reverseNextHorizontalLivingRoomLayout;
@property (weak, nonatomic) id<SXMosaicGalleryLayouterDataSource> dataSource;

- (id)itemAtIndex:(unsigned long long)a0;
- (void)reset;
- (id)viewForItem:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)viewForItemAtIndex:(unsigned long long)a0;
- (void)resetLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(unsigned long long)a0;
- (void)calculateLayoutForWidth:(double)a0;
- (id)clusterForItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)itemsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)layoutForCluster:(id)a0 previousLayouts:(id)a1;
- (void)layoutGalleryOnView:(id)a0;

@end
