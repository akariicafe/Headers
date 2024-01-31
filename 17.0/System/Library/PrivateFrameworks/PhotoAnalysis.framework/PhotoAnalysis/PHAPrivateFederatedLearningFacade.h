@class PHPhotoLibrary, CPAnalytics, PGManager;

@interface PHAPrivateFederatedLearningFacade : NSObject

@property (retain, nonatomic) CPAnalytics *analytics;
@property (retain, nonatomic) PGManager *graphManager;
@property (retain, nonatomic) PHPhotoLibrary *systemPhotoLibrary;

- (void).cxx_destruct;
- (void)runPFLWithAttachments:(id)a0 recipeUserInfo:(id)a1 resultBlock:(id /* block */)a2;
- (id)initWithPhotosLibrary:(id)a0 graphManagerProgress:(id /* block */)a1;

@end
