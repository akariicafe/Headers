@interface PBPlaceholder : NSObject

+ (BOOL)isBodyPlaceholder:(int)a0;
+ (BOOL)isTitlePlaceholder:(int)a0;
+ (int)placeholderTypeFromTextType:(int)a0;
+ (int)readPlaceholderOrientation:(int)a0;
+ (int)readPlaceholderSize:(int)a0;
+ (int)readPlaceholderType:(int)a0;
+ (void)writePlaceholder:(id)a0 toPlaceholderAtom:(struct PptOEPlaceholderAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; unsigned char x7 : 8; unsigned char x8 : 8; } *)a1 isMaster:(BOOL)a2 isNotes:(BOOL)a3;

@end
