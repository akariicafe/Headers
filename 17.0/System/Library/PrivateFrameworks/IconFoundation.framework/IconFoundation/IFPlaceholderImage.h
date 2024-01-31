@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (id)validationToken;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })iconSize;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (void)setPlaceholder:(BOOL)a0;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithImage:(id)a0;
- (BOOL)placeholder;
- (unsigned long long)validationFlags;
- (void).cxx_destruct;

@end
