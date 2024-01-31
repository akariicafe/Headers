@class NSObject, VNPersonsModel, GDVUVisualUnderstandingService, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPObjectPool;
@protocol OS_dispatch_queue;

@interface VCPMADPersonIdentificationTaskResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPObjectPool *_sessionPool;
    VCPPhotosFaceProcessingContext *_faceProcessingContext;
    VNPersonsModel *_personIdentityModel;
    PHPhotoLibrary *_photoLibrary;
    GDVUVisualUnderstandingService *_vuService;
}

+ (id)sharedResource;

- (id)photoLibrary;
- (void)purge;
- (id)init;
- (id)visionSession;
- (void).cxx_destruct;
- (void)_loadResources;
- (id)faceProcessingContext;
- (id)personIdentityModel;
- (id)vuService;

@end
