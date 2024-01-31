@class NSString;

@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying> {
    NSString *_className;
    double _scale;
    double _cornerRadius;
    double _lineWidth;
    struct CGColor { } *_strokeColor;
    struct CGColor { } *_fillColor;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClassName:(id)a0 scale:(double)a1 cornerRadius:(double)a2 lineWidth:(double)a3 strokeColor:(struct CGColor { } *)a4 fillColor:(struct CGColor { } *)a5;

@end
