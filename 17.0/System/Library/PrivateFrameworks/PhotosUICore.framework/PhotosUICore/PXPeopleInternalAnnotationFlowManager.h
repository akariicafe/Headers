@class PXPeopleSectionedDataSource, UICollectionView, NSMutableSet, UICollectionViewController, PXPeopleMetricsActionQueue, NSMutableArray;

@interface PXPeopleInternalAnnotationFlowManager : NSObject

@property (retain, nonatomic) NSMutableArray *selectedPersonsForAnnotation;
@property (retain, nonatomic) NSMutableSet *graphVerifiedPersonUUIDsAtStartOfAnnotation;
@property (retain, nonatomic) PXPeopleMetricsActionQueue *metricsActionQueue;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewController *viewController;
@property (readonly, nonatomic) PXPeopleSectionedDataSource *dataSource;

- (void).cxx_destruct;
- (void)_checkForNewGraphVerifiedPeopleAndAddReannotationItems;
- (void)_checkForNewMergeCandidatesAndAddReannotationItems;
- (BOOL)_shouldRunFaceProcessingForPhotoLibrary:(id)a0;
- (void)_showAnnotationCompletedWithCompletionHandler:(id /* block */)a0;
- (void)_showFaceProcessingViewForPhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (void)continueAnnotationFlow;
- (id)initWithPeopleCollectionViewController:(id)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (void)startAnnotationFlowForSelectedPersonIndexPaths:(id)a0;

@end
