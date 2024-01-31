@interface IMTranscoderImageCMPhotoSizeEstimator : IMTranscoderImageSizeEstimator {
    struct CMPhotoDecompressionContainer { } *_container;
}

- (void)dealloc;
- (unsigned long long)estimatedSizeForOutputUTI:(id)a0 maximumDimension:(long long)a1 quality:(double)a2;
- (id)initWithURL:(id)a0 uti:(id)a1 imageSource:(struct CGImageSource { } *)a2;
- (unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)a0 maximumDimension:(long long)a1 quality:(double)a2;

@end
