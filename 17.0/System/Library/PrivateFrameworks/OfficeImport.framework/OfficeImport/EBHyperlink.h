@interface EBHyperlink : NSObject

+ (void)addToolTip:(struct XlHLinkToolTip { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlRef *x2; struct XlString *x3; } *)a0 toEdHyperLink:(id)a1 edResources:(id)a2;
+ (id)edHyperlinkFromXlHLink:(struct XlHLink { void /* function */ **x0; struct XlHeader { unsigned int x0; short x1; unsigned char x2; } x1; struct XlRef *x2; int x3; BOOL x4; BOOL x5; struct XlString *x6; struct XlString *x7; struct XlString *x8; struct XlString *x9; struct XlString *x10; unsigned short x11; } *)a0 edResources:(id)a1;
+ (int)edTypeFromXlHyperlinkType:(int)a0;
+ (int)xlTypeFromEDHyperlinkType:(int)a0;

@end
