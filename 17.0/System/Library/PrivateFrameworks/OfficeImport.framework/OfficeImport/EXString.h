@interface EXString : NSObject

+ (void)buildEDString:(id)a0 fromChildrenOfNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 edFont:(id)a2 keepWhitespace:(BOOL)a3 state:(id)a4;
+ (void)buildEDString:(id)a0 fromNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 edFont:(id)a2 keepWhitespace:(BOOL)a3 state:(id)a4;
+ (void)buildEDString:(id)a0 fromText:(id)a1 edFont:(id)a2 keepWhitespace:(BOOL)a3 state:(id)a4;
+ (id)cleanupWhitespace:(id)a0;
+ (id)edStringWithRunsFromXmlDivElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)edStringWithRunsFromXmlStringElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)edTextFromXmlStringElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (void)parseStringWithAsciiCode:(id)a0;
+ (id)readStringWithAsciiCodeFromXmlStringElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
+ (void)replaceEscapeAsciiCodes:(id)a0;
+ (id)stringInEDString:(id)a0 forRunIndex:(unsigned int)a1;
+ (id)stringInEDString:(id)a0 start:(unsigned long long)a1 end:(unsigned long long)a2;

@end
