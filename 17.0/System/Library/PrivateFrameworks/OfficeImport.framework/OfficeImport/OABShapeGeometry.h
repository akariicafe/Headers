@interface OABShapeGeometry : NSObject

+ (void)appendAdjustPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0 toPathParams:(void *)a1;
+ (int)actualPathCommandForPathCommand:(int)a0 index:(unsigned short)a1;
+ (struct OADAdjustCoord { BOOL x0; int x1; })adjustCoordWithComputedValue:(struct EshComputedValue { BOOL x0; int x1; })a0;
+ (struct EshComputedValue { BOOL x0; int x1; })computedValueWithAdjustCoord:(struct OADAdjustCoord { BOOL x0; int x1; })a0;
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; void /* function */ **x3; } *)a0 toGeometry:(id)a1;
+ (void)readFromFormulas:(const void *)a0 toGeometry:(id)a1;
+ (void)readFromLimo:(struct CsPoint<int> { int x0[2]; })a0 toGeometry:(id)a1;
+ (void)readFromPathCommands:(const void *)a0 pathParams:(const void *)a1 toGeometry:(id)a2;
+ (void)readFromShape:(void *)a0 toShape:(id)a1;
+ (void)readFromTextBoxRects:(const void *)a0 toGeometry:(id)a1;
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; void /* function */ **x3; } *)a0 toGeometry:(id)a1;
+ (void)readLimoFromPath:(const struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0 toGeometry:(id)a1;
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0 toGeometry:(id)a1;
+ (void)writeAdjustValuesFromGeometry:(id)a0 toShapeProperties:(struct EshShapeProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; void /* function */ **x3; } *)a1;
+ (void)writeCoordSpaceFromGeometry:(id)a0 toShape:(void *)a1;
+ (void)writeFormulasFromGeometry:(id)a0 toPath:(struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1;
+ (void)writeFromShape:(id)a0 toShape:(void *)a1;
+ (void)writeLimoFromGeometry:(id)a0 toPath:(struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1;
+ (void)writePathCommandsAndParamsFromGeometry:(id)a0 toPath:(struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1;
+ (void)writeTextBodyRectsFromGeometry:(id)a0 toPath:(struct EshPath { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1;

@end
