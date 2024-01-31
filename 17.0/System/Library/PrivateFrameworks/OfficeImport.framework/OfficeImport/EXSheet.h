@interface EXSheet : NSObject

+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (Class)exSheetClassFromXmlSheetType:(id)a0 location:(id)a1;
+ (void)readAllDrawablesWithState:(id)a0;
+ (void)readCommonSheetElementsFrom:(struct _xmlTextReader { } *)a0 state:(id)a1;
+ (void)readDelayedSheeWithLocation:(id)a0 sheetXmlType:(id)a1 state:(id)a2;
+ (void)readDrawablesWithState:(id)a0;
+ (void)readLegacyDrawablesWithState:(id)a0;
+ (void)readSheetProperties:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;

@end
