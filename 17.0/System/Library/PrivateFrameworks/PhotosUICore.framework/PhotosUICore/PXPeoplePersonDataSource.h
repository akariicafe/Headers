@class PXPeopleFaceTileImageManager, NSString, PXPeopleDataSourceSection, NSMutableDictionary, NSDictionary;

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    PXPeopleFaceTileImageManager *_imageManager;
    NSMutableDictionary *_keyFaceByPersonLocalIdentifier;
    NSDictionary *_assetsByFaces;
    BOOL _showUUIDIfNoName;
}

@property (nonatomic) unsigned long long personFetchType;
@property (readonly, nonatomic) PXPeopleFaceTileImageManager *imageManager;
@property (retain, nonatomic) PXPeopleDataSourceSection *dataSourceSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (void)startListeningForChanges;
- (void).cxx_destruct;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)a0;
- (id)_faceForPerson:(id)a0;
- (id)_applyChanges:(id)a0;
- (id)_assetForFace:(id)a0;
- (void)_asyncLoadImageForItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (void)_asyncLoadImageForItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (void)_cacheFacesAndAssets;
- (id)_fetchResultForFetchType:(unsigned long long)a0 fetchOptions:(id)a1;
- (id)_itemsArrayFromObjects:(id)a0;
- (id)_membersForModelObjects:(id)a0;
- (long long)_personTypeForFetchType:(unsigned long long)a0;
- (void)cancelImageLoadingForItem:(id)a0;
- (id)faceTileAtIndex:(long long)a0;
- (id)generateFetchResult;
- (id)initWithName:(id)a0 personFetchType:(unsigned long long)a1;
- (id)initWithName:(id)a0 personFetchType:(unsigned long long)a1 fetchLimit:(unsigned long long)a2;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id /* block */)a0;
- (void)updateKeyFace:(id)a0 forPerson:(id)a1;

@end
