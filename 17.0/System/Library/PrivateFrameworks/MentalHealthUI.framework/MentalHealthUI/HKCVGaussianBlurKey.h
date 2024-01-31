@interface HKCVGaussianBlurKey : NSObject <NSCopying> {
    unsigned long long _identifier;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _textureSize;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(unsigned long long)a0 textureSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;

@end
