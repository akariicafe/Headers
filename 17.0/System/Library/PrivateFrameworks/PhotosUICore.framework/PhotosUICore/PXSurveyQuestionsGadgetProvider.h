@class PXPhotoKitUIMediaProvider, NSString, NSArray, PXAssetsDataSourceManager, NSDate, PXSurveyQuestionsDataSource, PXGadgetNavigationHelper, PXAssetReference, PHPhotoLibrary, PXSurveyQuestionPlaceholderGadget;
@protocol PXGadgetTransition, PXGadgetDelegate, PXSurveyQuestionsGadgetProviderDelegate;

@interface PXSurveyQuestionsGadgetProvider : PXGadgetProvider <PXSurveyQuestionGadgetDelegate, PXSurveyQuestionCongratulationsGadgetDelegate, PXOneUpPresentationDelegate, PXPhotoLibraryUIChangeObserver> {
    PXPhotoKitUIMediaProvider *_oneUpMediaProvider;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PHPhotoLibrary *_photoLibrary;
    PXSurveyQuestionPlaceholderGadget *_placeholderGadget;
}

@property (retain, nonatomic) NSArray *surveyGadgets;
@property (nonatomic) BOOL currentlyLoadingMoreQuestions;
@property (retain, nonatomic) NSDate *previousMostRecentQuestionCreationDate;
@property (readonly, nonatomic) PXSurveyQuestionsDataSource *dataSource;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (weak, nonatomic) id<PXSurveyQuestionsGadgetProviderDelegate> gadgetProviderDelegate;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)init;
- (void)dealloc;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)generateGadgets;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void).cxx_destruct;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)loadDataForGadgets;
- (void)_addCongratulationsGadgetWithCompletionHandlerIfNeeded:(id /* block */)a0;
- (id)_gadgetForSurveyQuestion:(id)a0;
- (void)_generateGadgetsWithLimit:(unsigned long long)a0;
- (void)_generateGadgetsWithLimit:(unsigned long long)a0 removeExistingGadgets:(BOOL)a1;
- (void)_handlePrepareForOneUpPresentationSuccessForGadget:(id)a0;
- (BOOL)_prepareForOneUpPresentationForGadget:(id)a0;
- (void)_reloadGadgetsWithLimit:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_targetGadgetForCurrentOneUpPresentation;
- (void)didAnswerQuestionForGadget:(id)a0;
- (void)didSelectActionButtonForType:(unsigned long long)a0;
- (id)initWithDataSource:(id)a0 gadgetType:(unsigned long long)a1;
- (void)pauseLibraryUpdates;
- (void)resumeLibraryUpdates;
- (void)showViewController:(id)a0 fromGadget:(id)a1;
- (void)surveyQuestionGadgetsWantsOneUpPresentation:(id)a0;

@end
