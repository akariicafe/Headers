@class TCEnumerationMap;

@interface WXSection : NSObject

@property (class, readonly) TCEnumerationMap *sectionBreakEnumMap;
@property (class, readonly) TCEnumerationMap *pageOrientationEnumMap;
@property (class, readonly) TCEnumerationMap *pageBorderDepthEnumMap;
@property (class, readonly) TCEnumerationMap *pageBorderDisplayEnumMap;
@property (class, readonly) TCEnumerationMap *pageBorderOffsetEnumMap;
@property (class, readonly) TCEnumerationMap *lineNumberRestartEnumMap;
@property (class, readonly) TCEnumerationMap *verticalJustificationEnumMap;
@property (class, readonly) TCEnumerationMap *chapterNumberSeparatorEnumMap;

+ (void)mapFooter:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toSection:(id)a1 state:(id)a2;
+ (void)mapHeader:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toSection:(id)a1 state:(id)a2;
+ (void)mapPrinterSettings:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toSection:(id)a1 state:(id)a2;
+ (void)mapProperties:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 toSection:(id)a1 state:(id)a2;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 to:(id)a1 state:(id)a2;
+ (float)scaleFromPrinterSettings:(id)a0;

@end
