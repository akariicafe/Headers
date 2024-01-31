@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidden;
- (int)strokeWidth;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })shadowColor;
- (int)shadowAlpha;
- (int)shadowType;
- (int)fillType;
- (BOOL)isFilled;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (BOOL)isStroked;
- (BOOL)isShadowed;
- (int)strokeJoinStyle;
- (int)fillFocusBottom;
- (int)fillAngle;
- (int)fillBgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillBgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (int)fillFgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillFgColor;
- (int)fillFocus;
- (int)fillFocusLeft;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (const void *)fillGradientColors;
- (BOOL)isFillOK;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isTextPath;
- (int)shadowSoftness;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeBgColor;
- (int)strokeCapStyle;
- (int)strokeCompoundType;
- (const void *)strokeCustomDash;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeFgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeFgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)strokeFillBlipDataReference;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokeFillType;
- (int)strokeMiterLimit;
- (int)strokePresetDash;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (int)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end
