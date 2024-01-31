@class PHPhotoLibrary, CPAnalytics, PGManager;

@interface PHACurareShadowEvaluationFacade : NSObject

@property (retain, nonatomic) CPAnalytics *analytics;
@property (retain, nonatomic) PGManager *graphManager;
@property (retain, nonatomic) PHPhotoLibrary *systemPhotoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotosLibrary:(id)a0 graphManagerProgress:(id /* block */)a1;
- (void)runPFLRecipeUserInfo:(id)a0 models:(id)a1 trialDeploymentID:(id)a2 trialExperimentID:(id)a3 trialTreatmentID:(id)a4 resultBlock:(id /* block */)a5;

@end
