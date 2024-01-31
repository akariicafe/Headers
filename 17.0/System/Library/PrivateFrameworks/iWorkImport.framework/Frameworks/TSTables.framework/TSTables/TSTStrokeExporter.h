@class TSTTableInfo, NSPointerArray, TSUIntegerKeyDictionary;
@protocol TSTCustomStrokeProviding, TSTTableStrokeProviding;

@interface TSTStrokeExporter : NSObject

@property (readonly, nonatomic) id<TSTTableStrokeProviding> defaultStrokeProvider;
@property (readonly, nonatomic) id<TSTCustomStrokeProviding> customStrokeProvider;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) NSPointerArray *topRowStrokes;
@property (readonly, nonatomic) NSPointerArray *bottomRowStrokes;
@property (readonly, nonatomic) NSPointerArray *leftColumnStrokes;
@property (readonly, nonatomic) NSPointerArray *rightColumnStrokes;
@property (retain, nonatomic) TSUIntegerKeyDictionary *rowStrokeExportCache;
@property (retain, nonatomic) TSUIntegerKeyDictionary *columnStrokeExportCache;

- (void).cxx_destruct;
- (id)initWithDefaultStrokeProvider:(id)a0 customStrokeProvider:(id)a1 tableInfo:(id)a2;
- (void)p_resolveStrokes;
- (id)p_strokeExportCacheForColumnBefore:(unsigned short)a0 columnAfter:(unsigned short)a1;
- (id)p_strokeExportCacheForGridColumn:(unsigned int)a0;
- (id)p_strokeExportCacheForGridRow:(unsigned int)a0;
- (id)p_strokeExportCacheForRowAbove:(unsigned int)a0 rowBelow:(unsigned int)a1;
- (id)strokeLayerForColumn:(unsigned int)a0;
- (id)strokeLayerForRow:(unsigned int)a0;
- (void)strokesForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 top:(id *)a1 left:(id *)a2 bottom:(id *)a3 right:(id *)a4;

@end
