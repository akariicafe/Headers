@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {
    NSArray *_faces;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (id)cacheKey;
- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer { } *)a0 withFaceRects:(id)a1 error:(out id *)a2;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer { } *)a0 maxResultCount:(unsigned long long)a1 error:(out id *)a2;
- (id)initWithFaceDetectionRequest:(id)a0;

@end
