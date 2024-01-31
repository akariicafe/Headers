@class CUIImage;

@interface CUIPSDImageLayer : CUIPSDLayer {
    CUIImage *_image;
}

@property (readonly, nonatomic) struct CGImage { } *cgImageRef;

- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage { } *)a0;

@end
