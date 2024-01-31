@class UIView, NSString, SearchUICommandEnvironment, NSDictionary, PXAssetReference, PXPhotoKitAssetsDataSourceManager, UIViewController, SFShowPhotosOneUpViewCommand;
@protocol PXMemoryAssetsActionFactory;

@interface SearchUIPhotosOneUpController : NSObject <PXOneUpPresentationDelegate, PXActionPerformerDelegate>

@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *activeDataSourceManager;
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference;
@property (nonatomic) BOOL isSyndicated;
@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *command;
@property (retain) NSDictionary *rowModelsForCorespotlightIdentifiers;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (weak) UIView *hiddenView;
@property (weak) UIViewController *peekedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

+ (id)bundleIdentifierForAsset:(id)a0;
+ (id)sharedController;
+ (id)corespotlightIdentifierForAsset:(id)a0;

- (long long)oneUpPresentationOrigin:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void).cxx_destruct;
- (id)oneUpPresentationActionManager:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (id)oneUpPresentationMatchedAudioIdentifiers:(id)a0;
- (id)oneUpPresentationMatchedHumanActionIdentifiers:(id)a0;
- (id)oneUpPresentationMatchedPersonLocalIdentifiers:(id)a0;
- (id)oneUpPresentationMatchedQueryStrings:(id)a0;
- (id)oneUpPresentationMatchedSceneIdentifiers:(id)a0;
- (BOOL)updateWithRowModel:(id)a0 environment:(id)a1;
- (id)imageViewInView:(id)a0;
- (void)presentOneUpViewForRowModel:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewViewControllerForRowModel:(id)a0 environment:(id)a1;
- (id)rowModelForAsset:(id)a0;
- (id)rowModelForAssetReference:(id)a0;
- (BOOL)updateWithCoreSpotlightIdentifiers:(id)a0 currentCorespotlightIdentifier:(id)a1;
- (id)viewForAssetReference:(id)a0;

@end
