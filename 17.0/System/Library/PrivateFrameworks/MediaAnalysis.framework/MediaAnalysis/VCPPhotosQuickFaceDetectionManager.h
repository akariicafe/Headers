@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
}

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (int)_persistFaces:(id)a0 forAsset:(id)a1;
- (int)processAsset:(id)a0;

@end
