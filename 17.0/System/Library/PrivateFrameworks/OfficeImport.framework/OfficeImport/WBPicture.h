@interface WBPicture : WBOfficeArt

+ (id)readDrawableFromReader:(id)a0 textType:(int)a1;
+ (void)readFrom:(id)a0 at:(int)a1 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a2 paragraph:(id)a3 to:(id)a4;

@end
