@interface PXFeedSyntheticDataSourceManager : PXSectionedDataSourceManager {
    long long _initialNumberOfSections;
    long long _initialNumberOfItemsPerSection;
}

- (id)init;
- (id)createInitialDataSource;
- (id)initWithNumberOfSections:(long long)a0 numberOfItemsPerSection:(long long)a1;

@end
