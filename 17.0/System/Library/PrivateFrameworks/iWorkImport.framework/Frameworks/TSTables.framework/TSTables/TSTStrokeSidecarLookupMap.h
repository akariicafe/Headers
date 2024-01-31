@class NSIndexSet, TSTStrokeLayer, TSTCellRegion, TSTStrokeSidecar;

@interface TSTStrokeSidecarLookupMap : NSObject

@property (retain, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property (retain, nonatomic) TSTCellRegion *region;
@property (retain, nonatomic) NSIndexSet *columnIndexesInRow;
@property (retain, nonatomic) TSTStrokeLayer *topStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer *bottomStrokeLayer;

- (void).cxx_destruct;
- (BOOL)anyCellBordersInThisRow;
- (BOOL)cellBorderAtColumn:(unsigned short)a0;
- (id)initWithStrokeSidecar:(id)a0 region:(id)a1;
- (void)setIteratorToRow:(unsigned int)a0;

@end
