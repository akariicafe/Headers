@interface TSUXmlUtilities : NSObject

+ (BOOL)examineXmlDocPtr:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 nodeHandler:(id /* block */)a1;
+ (BOOL)examineXmlNodes:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 nodeHandler:(id /* block */)a1 continueExamining:(BOOL *)a2 walkChildren:(BOOL)a3;
+ (void)loadXmlFromData:(id)a0 options:(int)a1 encoding:(int *)a2 loadXmlHandlier:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (void)normalizeXml:(id)a0 nodeHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (void)normalizeXml:(id)a0 nodeHandler:(id /* block */)a1 completionHandler:(id /* block */)a2 encoding:(int *)a3;
+ (BOOL)reloadXmlData:(id)a0 docPtr:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a1;
+ (BOOL)validateXml:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 dtd:(id)a1 validateXmlHandler:(id /* block */)a2;
+ (BOOL)validateXmlData:(id)a0 dtd:(id)a1 error:(id *)a2 validateXmlHandler:(id /* block */)a3;

@end
