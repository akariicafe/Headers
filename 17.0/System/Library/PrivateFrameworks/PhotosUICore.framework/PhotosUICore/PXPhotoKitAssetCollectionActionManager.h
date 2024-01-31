@class PXAssetsDataSource, NSMapTable, NSDictionary, NSString, PXAssetCollectionActionPerformer, PHFetchResult, PXAssetReference;
@protocol UITraitEnvironment, UIDragSession, PXMemoryAssetsActionFactory, UIDropSession;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem;
@property (readonly, nonatomic) NSDictionary *_performerClassesByType;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) id<UITraitEnvironment> traitEnvironment;

+ (id)actionManagerWithDataSourceManager:(id)a0;

- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (void)performActivity:(id)a0;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)barButtonItemForActionType:(id)a0;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1 requireThatPerformerCanPerformAction:(BOOL)a2;
- (void)_handleActionPerformerComplete:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_handleBarButtonItem:(id)a0;
- (id)standardActionForActionType:(id)a0;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;
- (void)_executeActionTypeIfPossible:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)activityForActionType:(id)a0;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (BOOL)supportsActionType:(id)a0;

@end
