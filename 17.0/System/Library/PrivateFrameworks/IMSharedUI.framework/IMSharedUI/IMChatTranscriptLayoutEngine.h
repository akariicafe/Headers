@class NSArray, IMChatTranscriptLayoutSpecification, NSMutableArray;
@protocol IMChatTranscriptLayoutEngineDataSource;

@interface IMChatTranscriptLayoutEngine : NSObject {
    NSMutableArray *_cachedDrawables;
}

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IMChatTranscriptLayoutEngineDataSource> dataSource;
@property (retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)_updateContentSize;
- (void)reloadData;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (id)_makeDrawableForTranscriptItem:(id)a0;
- (void)_buildLayoutAttributesIfNeeded;
- (id)_cachedDrawableAtIndexOrNil:(unsigned long long)a0;
- (id)_cachedDrawableForTranscriptItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)_invalidateCachedItemData;
- (unsigned long long)_numberOfTranscriptItems;
- (double)_spaceForVerticalSpaceDescriptor:(long long)a0;
- (void)_updateFrames;
- (id)drawableAtIndex:(unsigned long long)a0;
- (void)removeItemsAtIndexPaths:(id)a0 insertItemsAtIndexPaths:(id)a1;

@end
