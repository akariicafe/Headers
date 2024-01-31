@class NSString;
@protocol PUCollectionsCollectionViewDropDataProvider;

@interface PUCollectionsCollectionViewDropDelegate : NSObject <UICollectionViewDropDelegate> {
    BOOL _dataProviderImplementsAllowDrop;
}

@property (weak, nonatomic) id<PUCollectionsCollectionViewDropDataProvider> dropDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (BOOL)collectionView:(id)a0 canHandleDropSesson:(id)a1;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)_canHandleDropSession:(id)a0;
- (void)_handleDrop:(id)a0 forItemAtIndexPath:(id)a1;
- (BOOL)_allowDrop;
- (id)_collectionAtIndexPath:(id)a0;

@end
