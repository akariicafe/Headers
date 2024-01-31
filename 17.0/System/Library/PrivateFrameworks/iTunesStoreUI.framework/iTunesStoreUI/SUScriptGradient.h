@class NSString, SUGradient;

@interface SUScriptGradient : SUScriptObject {
    SUGradient *_nativeGradient;
}

@property (readonly) NSString *type;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)initWithGradient:(id)a0;
- (id)scriptAttributeKeys;
- (void)addColorStopWithOffset:(double)a0 color:(id)a1;
- (id)copyNativeGradient;
- (id)initLinearGradientWithX0:(double)a0 y0:(double)a1 x1:(double)a2 y1:(double)a3;
- (id)initRadialGraidentWithX0:(double)a0 y0:(double)a1 r0:(double)a2 x1:(double)a3 y1:(double)a4 r1:(double)a5;
- (id)patternColorWithWidth:(double)a0 height:(double)a1 opaque:(BOOL)a2;

@end
