@class NSString, SUScriptColor;

@interface SUScriptCanvasContext : SUScriptObject {
    struct CGContext { } *_context;
    struct CGPath { } *_contextPath;
    id _fillStyle;
    long long _fillStyleType;
    double _height;
    double _scale;
    double _shadowBlur;
    SUScriptColor *_shadowColor;
    double _shadowOffsetX;
    double _shadowOffsetY;
    id _strokeStyle;
    long long _strokeStyleType;
    double _width;
}

@property (readonly) double height;
@property (readonly) double width;
@property (retain) id fillStyle;
@property (retain) id strokeStyle;
@property double globalAlpha;
@property (retain) NSString *globalCompositeOperation;
@property (retain) id lineCap;
@property (retain) id lineJoin;
@property double lineWidth;
@property double miterLimit;
@property double shadowBlur;
@property (retain) id shadowColor;
@property double shadowOffsetX;
@property double shadowOffsetY;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)saveState;
- (void)dealloc;
- (void)restoreState;
- (id)initWithWidth:(double)a0 height:(double)a1;
- (id)_className;
- (void)clip;
- (void)closePath;
- (void)fill;
- (void)stroke;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)beginPath;
- (void)fillRectWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (BOOL)isPointInPathWithX:(double)a0 y:(double)a1;
- (void)lineToX:(double)a0 y:(double)a1;
- (void)moveToX:(double)a0 y:(double)a1;
- (void)rotateWithAngle:(double)a0;
- (void)translateWithX:(double)a0 y:(double)a1;
- (void)_ntsApplyShadow;
- (id)copyCanvasImage;
- (void)strokeRectWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)arcToX1:(double)a0 y1:(double)a1 x2:(double)a2 y2:(double)a3 radius:(double)a4;
- (void)arcWithX:(double)a0 y:(double)a1 radius:(double)a2 startAngle:(double)a3 endAngle:(double)a4 antiClockwise:(BOOL)a5;
- (void)bezierCurveToCP1X:(double)a0 cp1y:(double)a1 cp2x:(double)a2 cp2y:(double)a3 x:(double)a4 y:(double)a5;
- (void)clearRectWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (struct CGPath { } *)copyCanvasPath;
- (id)makeLinearGradientWithX0:(double)a0 y0:(double)a1 x1:(double)a2 y1:(double)a3;
- (id)makeRadialGradientWithX0:(double)a0 y0:(double)a1 r0:(double)a2 x1:(double)a3 y1:(double)a4 r1:(double)a5;
- (void)quadraticCurveToCPX:(double)a0 cpy:(double)a1 x:(double)a2 y:(double)a3;
- (void)scaleWithX:(double)a0 y:(double)a1;
- (void)setTransformWithM11:(double)a0 m12:(double)a1 m21:(double)a2 m22:(double)a3 dx:(double)a4 dy:(double)a5;
- (void)transformWithM11:(double)a0 m12:(double)a1 m21:(double)a2 m22:(double)a3 dx:(double)a4 dy:(double)a5;

@end
