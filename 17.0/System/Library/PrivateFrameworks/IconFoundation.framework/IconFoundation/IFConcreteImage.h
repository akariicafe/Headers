@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
    struct CGSize { double width; double height; } _iconSize;
}

- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3 iconSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (id)_init;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })iconSize;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (void)setPlaceholder:(BOOL)a0;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)description;
- (BOOL)placeholder;
- (struct CGImage { } *)_CGImage;
- (unsigned long long)validationFlags;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
