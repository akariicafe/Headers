@interface OAXFontScheme : NSObject

+ (void)writeFont:(id)a0 elementName:(id)a1 to:(id)a2 state:(id)a3;
+ (void)readFontScheme:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toFontScheme:(id)a1 drawingState:(id)a2;
+ (void)readFontSchemeEntries:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 font:(id)a1;
+ (void)writeFontScheme:(id)a0 to:(id)a1 state:(id)a2;
+ (void)writeTypeface:(id)a0 elementName:(id)a1 to:(id)a2 state:(id)a3;

@end
