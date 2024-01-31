@interface OAXTextCharPropertyBag : NSObject

+ (id)oaxUnderlineMap;
+ (void)readCharacterProperties:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 characterProperties:(id)a1 drawingState:(id)a2;
+ (void)readFont:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 characterProperties:(id)a1;
+ (void)readFormatting:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 characterProperties:(id)a1 drawingState:(id)a2;
+ (unsigned char)readUnderlineType:(id)a0;
+ (id)stringWithCapsType:(unsigned char)a0;
+ (id)stringWithStrikeThroughType:(unsigned char)a0;
+ (id)stringWithUnderlineType:(unsigned char)a0;

@end
