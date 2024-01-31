@class NSString, PHPerson, NSMutableDictionary, PXPeopleSuggestionDataSource, NSMutableArray, PXPeopleRecoDataSource, PHFetchResult, NSMutableSet;
@protocol PXPeopleInternalAnnotationDataSourceDelegate;

@interface PXPeopleInternalAnnotationDataSource : NSObject <PXPhotoLibraryUIChangeObserver, PXPeopleRecoDataSourceDelegate>

@property (retain, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PXPeopleSuggestionDataSource *mergeCandidatesDataSource;
@property (readonly, nonatomic) PXPeopleRecoDataSource *confirmedAssetsDataSource;
@property (retain, nonatomic) PHFetchResult *mergeCandidates;
@property (retain, nonatomic) NSMutableSet *acceptedMergeCandidates;
@property (retain, nonatomic) NSMutableSet *rejectedMergeCandidates;
@property (retain, nonatomic) NSMutableArray *unverifiedPeople;
@property (retain, nonatomic) NSMutableArray *unverifiedPeopleFaces;
@property (retain, nonatomic) NSMutableSet *acceptedUnverifiedPeople;
@property (retain, nonatomic) NSMutableDictionary *keyFaceDistancesByUnverifiedPersonLocalIdentifier;
@property (nonatomic) BOOL hasChanges;
@property (readonly, weak, nonatomic) id<PXPeopleInternalAnnotationDataSourceDelegate> dataSourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitChanges;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (void)fetchMergeCandidatesAndFaces;
- (void)fetchUnverifiedPeopleAndFaces;
- (id)initWithPerson:(id)a0 dataSourceDelegate:(id)a1;
- (BOOL)isIndexPathRejected:(id)a0;
- (id)keyFaceDistanceForUnverifiedPersonIndexPath:(id)a0;
- (void)recoDataSourceDataChanged:(id)a0;
- (void)requestImageForItemAtIndexPath:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 imageBlock:(id /* block */)a3;
- (id)titleForIndexPath:(id)a0;
- (BOOL)toggleRejectionForIndexPath:(id)a0;

@end
