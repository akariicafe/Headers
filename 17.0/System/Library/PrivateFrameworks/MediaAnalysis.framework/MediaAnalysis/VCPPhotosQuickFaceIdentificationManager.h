@class VNPersonsModel, GDVUVisualUnderstandingService, VCPFaceAnalyzer, VNEntityIdentificationModel, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
    GDVUVisualUnderstandingService *_vuService;
}

+ (BOOL)_fastFaceMigrationEnabled;

- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (id)init;
- (BOOL)_persistPetsModel:(id)a0 error:(id *)a1;
- (int)_classifyFaces:(id)a0 forAsset:(id)a1 detectedPersons:(id *)a2;
- (void)personIdentificationForSyndicationPhotoLibrary:(id)a0 withCancelOrExtendTimeoutBlock:(id /* block */)a1;
- (id)_fetchPersonsToFeedVIPModel:(BOOL)a0 allowUnverifiedPerson:(BOOL)a1;
- (BOOL)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)a0;
- (BOOL)_needToGenerateModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1 withExtendTimeout:(id /* block */)a2;
- (int)generateVIPModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1 evaluationMode:(BOOL)a2 allowUnverifiedPerson:(BOOL)a3 modelGenerated:(BOOL *)a4 extendTimeout:(id /* block */)a5 andCancel:(id /* block */)a6;
- (int)faceProcessingVersionFromVNFaceprintRequestRevision:(unsigned long long)a0;
- (int)_generatePersonsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1 evaluationMode:(BOOL)a2 allowUnverifiedPerson:(BOOL)a3;
- (int)_loadPetsModel;
- (BOOL)_persistPersonsModel:(id)a0 evaluationMode:(BOOL)a1 error:(id *)a2;
- (BOOL)_faceProcessingPassGoalWithExtendTimeout:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_fetchPetsToFeedVIPModel;
- (int)_generatePetsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (int)classifyVIPPets;
- (void).cxx_destruct;
- (int)loadPersonsModelAndInitializeFaceAnalyzerWrapper;
- (int)processAsset:(id)a0 onDemandDetection:(BOOL)a1 detectedFaces:(id *)a2 detectedPersons:(id *)a3;
- (BOOL)_keepCurrentPersonsModelWithExtendTimeout:(id /* block */)a0;
- (id)fetchEntityForModelType:(unsigned long long)a0 evaluationMode:(BOOL)a1 allowUnverifiedPerson:(BOOL)a2;

@end
