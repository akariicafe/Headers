@interface WBOfficeArt : NSObject

+ (void)readFrom:(id)a0 at:(int)a1 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a2 paragraph:(id)a3 to:(id)a4;
+ (void)setShapeAddress:(const struct WrdFileShapeAddress { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; BOOL x11; BOOL x12; BOOL x13; int x14; } *)a0 toDrawable:(id)a1;

@end
