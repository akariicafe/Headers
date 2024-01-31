@class NSArray, NSDictionary, NSMutableDictionary, PHPhotoLibrary;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource {
    NSMutableDictionary *_cachedSortedPersonsByTypeAndSection;
}

@property (readonly, copy, nonatomic) NSArray *personsSections;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSDictionary *faceTiles;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly, nonatomic) unsigned long long peopleHomeSortingType;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_personsInSection:(long long)a0;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithPhotoLibrary:(id)a0 personsSections:(id)a1 faceTiles:(id)a2 peopleHomeSortingType:(unsigned long long)a3;
- (id)sortedObjectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
