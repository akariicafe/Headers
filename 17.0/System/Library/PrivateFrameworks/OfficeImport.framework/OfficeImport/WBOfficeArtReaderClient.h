@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (BOOL)allowOverlap:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (BOOL)behindText:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (BOOL)escherIsFullySupported;
+ (int)horizontalPosition:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)a0 state:(id)a1;
+ (void)readClientDataFromGroup:(id)a0 toGroup:(id)a1 state:(id)a2;
+ (void)readClientDataFromObject:(id)a0 toDrawable:(id)a1 state:(id)a2;
+ (void)readClientDataFromShape:(id)a0 toGraphic:(id)a1 includeText:(BOOL)a2 state:(id)a3;
+ (void)readClientDataFromShape:(id)a0 toGraphic:(id)a1 state:(id)a2;
+ (void)readClientDataFromTableCell:(id)a0 toTableCell:(id)a1 state:(id)a2;
+ (id)readDrawableFromPackagePart:(id)a0 foundInObject:(id)a1 state:(id)a2;
+ (void)readFrom:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0 to:(id)a1;
+ (int)relativeHorizontalPosition:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (int)relativeVerticalPosition:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (BOOL)tablesAreAllowed;
+ (int)verticalPosition:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (double)wrapDistanceBottom:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (double)wrapDistanceLeft:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (double)wrapDistanceRight:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (double)wrapDistanceTop:(struct EshContentProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a0;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;

@end
