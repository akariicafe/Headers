@interface _PXFeedSyntheticDataSource : PXSectionedDataSource {
    long long _numberOfSections;
    long long _numberOfItemsPerSection;
}

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithNumberOfSections:(long long)a0 numberOfItemsPerSection:(long long)a1;

@end
