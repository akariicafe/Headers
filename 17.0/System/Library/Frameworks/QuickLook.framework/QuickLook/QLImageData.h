@interface QLImageData : NSObject {
    struct CGImageSource { } *_imageSource;
}

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)count;
- (id)durations;
- (long long)orientation;
- (id)type;
- (id)imageAtIndex:(unsigned long long)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;

@end
