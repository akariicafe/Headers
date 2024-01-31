@class UIColor;

@interface SUScriptColor : SUScriptObject {
    UIColor *_color;
}

@property (readonly) UIColor *nativeColor;
@property (readonly) double red;
@property (readonly) double green;
@property (readonly) double blue;
@property (readonly) double alpha;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)stringRepresentation;
- (void)dealloc;
- (id)_className;
- (id)initWithUIColor:(id)a0;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithStyleString:(id)a0;
- (void)setWhite:(double)a0 alpha:(double)a1;
- (struct CGColor { } *)copyCGColor;
- (void)setHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (void)setRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

@end
