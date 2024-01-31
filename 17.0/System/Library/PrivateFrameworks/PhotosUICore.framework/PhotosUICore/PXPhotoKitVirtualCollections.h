@class PHCollectionList, PHPhotoLibrary, PHAssetCollection, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotoKitVirtualCollections : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHAssetCollection *momentsCollection;
@property (readonly, nonatomic) PHAssetCollection *photosCollection;
@property (readonly, nonatomic) PHAssetCollection *memoriesCollection;
@property (readonly, nonatomic) PHAssetCollection *forYouCollection;
@property (readonly, nonatomic) PHAssetCollection *searchCollection;
@property (readonly, nonatomic) PHAssetCollection *prototypeCollection;
@property (readonly, nonatomic) PHAssetCollection *allAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *completeMyMomentCollection;
@property (readonly, nonatomic) PHAssetCollection *peopleCollection;
@property (readonly, nonatomic) PHAssetCollection *sharedActivityCollection;
@property (readonly, nonatomic) PHAssetCollection *importHistoryCollection;
@property (readonly, nonatomic) PHAssetCollection *myAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *sharedAlbumsCollection;
@property (readonly, nonatomic) PHAssetCollection *contentSyndicationCollection;
@property (readonly, nonatomic) PHCollectionList *sharedAlbumsCollectionList;
@property (readonly, nonatomic) PHCollectionList *sharedAlbumsAndActivityCollectionList;
@property (readonly, nonatomic) PHCollectionList *mediaTypesCollectionList;
@property (readonly, nonatomic) PHCollectionList *rootAlbumCollectionList;
@property (readonly, nonatomic) PHCollectionList *rootProjectCollectionList;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;

@end
