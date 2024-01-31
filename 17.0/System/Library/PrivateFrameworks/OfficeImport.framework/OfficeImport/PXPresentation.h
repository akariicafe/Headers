@interface PXPresentation : NSObject

+ (id)readFromPackage:(id)a0 fileName:(id)a1 reader:(id)a2 cancel:(id)a3 isThumbnail:(BOOL)a4 delegate:(id)a5;
+ (void)readPresentationProperties:(id)a0 to:(id)a1 state:(id)a2;
+ (struct CGSize { double x0; double x1; })readSizeFromChildOfElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 childName:(const char *)a1 state:(id)a2;
+ (void)readSlideIndicesWithPresentationPart:(id)a0 presentationState:(id)a1;

@end
