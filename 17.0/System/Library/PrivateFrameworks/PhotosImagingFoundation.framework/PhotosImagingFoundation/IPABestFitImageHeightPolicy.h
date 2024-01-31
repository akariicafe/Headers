@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy {
    double _fitHeight;
}

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHeight:(double)a0;
- (BOOL)isBestFitPolicy;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
