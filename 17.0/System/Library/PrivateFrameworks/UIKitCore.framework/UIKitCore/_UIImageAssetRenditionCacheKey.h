@class UIColor, NSString;

@interface _UIImageAssetRenditionCacheKey : NSObject {
    UIColor *resolvedTintColor;
    NSString *appearanceName;
    struct CGSize { double width; double height; } _size;
    unsigned int _drawMode;
    struct { unsigned char bold : 1; unsigned char letterpress : 1; } _flags;
}

+ (id)keyWithSize:(struct CGSize { double x0; double x1; })a0 unresolvedTintColor:(id)a1 traitCollection:(id)a2 bold:(BOOL)a3 letterpress:(BOOL)a4 drawMode:(unsigned int)a5;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
