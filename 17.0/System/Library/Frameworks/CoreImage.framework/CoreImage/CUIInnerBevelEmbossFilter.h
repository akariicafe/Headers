@interface CUIInnerBevelEmbossFilter : CUIOuterBevelEmbossFilter

- (id)outputImage;
- (id)_kernelInvertMask;
- (id)_kernelMultiplyByMask;

@end
