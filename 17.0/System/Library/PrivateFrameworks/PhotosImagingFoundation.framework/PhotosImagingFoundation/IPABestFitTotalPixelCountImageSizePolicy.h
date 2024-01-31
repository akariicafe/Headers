@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy {
    long long _totalPixelCount;
}

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;
- (struct CGSize { double x0; double x1; })_transformSize:(struct CGSize { double x0; double x1; })a0 scale:(double *)a1;
- (id)initWithTotalPixelCount:(long long)a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
