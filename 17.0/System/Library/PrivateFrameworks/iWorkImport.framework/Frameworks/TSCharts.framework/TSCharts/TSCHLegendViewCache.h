@class TSCHLegendModelCache;

@interface TSCHLegendViewCache : NSObject {
    TSCHLegendModelCache *_modelCache;
    unsigned long long _cellCount;
    struct CGPoint { double x0; double x1; } *_cellOrigins;
}

@property (readonly) unsigned long long numberOfRows;
@property (readonly) unsigned long long numberOfColumns;
@property (readonly) struct CGSize { double width; double height; } legendSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLegendModelCache:(id)a0 legendWidth:(double)a1;
- (struct CGPoint { double x0; double x1; })originForCell:(id)a0;

@end
