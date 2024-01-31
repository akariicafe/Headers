@interface PBBulletProperties : NSObject

+ (int)readBulletNumberScheme:(int)a0;
+ (int)readBulletNumberSchemeFromExtended:(unsigned int)a0;
+ (id)readBulletProperties:(struct PptParaProperty9 { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; short x1; BOOL x2; struct PptTextAutoNumberScheme { unsigned char x0 : 6; short x1; } x3; } *)a0 state:(id)a1;
+ (int)writeBulletNumberScheme:(int)a0;

@end
