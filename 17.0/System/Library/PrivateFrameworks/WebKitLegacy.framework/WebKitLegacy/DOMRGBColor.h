@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue *red;
@property (readonly) DOMCSSPrimitiveValue *green;
@property (readonly) DOMCSSPrimitiveValue *blue;
@property (readonly) DOMCSSPrimitiveValue *alpha;

- (struct CGColor { } *)color;
- (void)dealloc;

@end
