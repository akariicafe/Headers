@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (BOOL)_isInvertible;
- (id)_kernelRGB;

@end
