@class PHFetchResult;

@interface PXSharedLibraryPhotoKitDataSource : PXSharedLibraryDataSource {
    PHFetchResult *_fetchResult;
}

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithFetchResult:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)dataSourceUpdatedWithChange:(id)a0 changeDetails:(id *)a1;

@end
