@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (id)requestOptions;
- (BOOL)prepare:(out id *)a0;

@end
