@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying> {
    int mKind;
    struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *mCellRanges;
    unsigned long long mCellRangeCount;
    BOOL mByColumn;
    BOOL mByRow;
    BOOL mByCell;
    BOOL mByContent;
    BOOL mByCellRange;
    BOOL mByMissingCellRange;
    BOOL mReverse;
}

@property (weak, nonatomic) TSTLayout *layout;
@property (readonly) unsigned long long stageCount;
@property (readonly) unsigned long long stage;
@property (readonly) BOOL final;
@property BOOL showsTableChrome;
@property BOOL showsOverlayLayers;
@property BOOL expandBackgroundFill;
@property BOOL drawsBlackAndWhite;
@property (readonly) unsigned long long cellRangeCount;
@property (readonly) BOOL drawTableName;
@property (readonly) BOOL drawTableBackground;
@property (readonly) BOOL drawCellBackground;
@property (readonly) BOOL drawCellContent;
@property (readonly) BOOL clipStrokes;
@property (readonly) BOOL drawStrokes;
@property (readonly) BOOL enabled;

+ (id)textureDeliveryStylesLocalized:(BOOL)a0;
+ (BOOL)deliveryStyleSupportedForExport:(unsigned long long)a0;
+ (id)newAnimationWithLayout:(id)a0 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
+ (id)newAnimationWithLayout:(id)a0 andDeliveryStyle:(unsigned long long)a1;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;
+ (unsigned long long)p_NumberOfCellBuilds:(id)a0;
+ (unsigned long long)p_NumberOfColumnBuilds:(id)a0;
+ (unsigned long long)p_NumberOfRowBuilds:(id)a0;
+ (unsigned long long)p_stageCountForProvider:(id)a0 withAnimationKind:(int)a1;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)a0 tableProvider:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCellRanges;
- (void)addCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })cellRangeAtIndex:(unsigned long long)a0;
- (void)setStage:(unsigned long long)a0 andFinal:(BOOL)a1;
- (BOOL)isHidingContentOfCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
