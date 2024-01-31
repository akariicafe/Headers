@interface OAXColorMap : NSObject

+ (id)mapColorEnumMap;
+ (void)readFromXmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toColorMap:(id)a1;
+ (void)writeColorMap:(id)a0 elementName:(id)a1 to:(id)a2 state:(id)a3;

@end
