@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject {
    unsigned long long _currentIndex;
    unsigned long long _size;
    PXNewMagazineGrid *_tileGrid;
    BOOL _isPerfectEnding;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long endingType;
@property (readonly, nonatomic) struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; } *rects;

- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addRect:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)isPerfectEnding;
- (id)immutableCopyForCurrentRectsCount;
- (id)initWithSize:(unsigned long long)a0 tileGrid:(id)a1;
- (BOOL)isEqualToRectArray:(id)a0;
- (BOOL)isGoodEnding;
- (BOOL)nextEmptyTileX:(long long *)a0 Y:(long long *)a1 maxWidth:(long long *)a2;
- (struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })rectAtIndex:(unsigned long long)a0;
- (void)removeLastRect;
- (unsigned long long)rowsUsed;
- (double)tileDensity;

@end
