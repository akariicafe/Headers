@interface WXText : NSObject

+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)addNewSectionTo:(id)a0 state:(id)a1;
+ (void)createChildren:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)createChildrenFromStream:(struct _xmlTextReader { } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)readFromParagraph:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)readFromStream:(struct _xmlTextReader { } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)readFromStream:(struct _xmlTextReader { } *)a0 state:(id)a1;
+ (void)readFromString:(id)a0 to:(id)a1;
+ (void)readFromTable:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseStyle:(id)a1 to:(id)a2 state:(id)a3;
+ (void)updateTextBoxIdsFromState:(id)a0;

@end
