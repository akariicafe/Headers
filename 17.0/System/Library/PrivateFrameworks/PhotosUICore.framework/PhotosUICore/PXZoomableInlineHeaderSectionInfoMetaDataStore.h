@class PXAssetsDataSource;

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {
    struct *_sectionInfosByLevel[2];
    long long _sectionsCountByLevel[2];
    long long _sectionsCapacityByLevel[2];
}

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;

- (void)dealloc;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)a0 level:(unsigned long long)a1;
- (void)resetSectionInfos;
- (id)description;
- (id)initWithDataSource:(id)a0;
- (void)addSectionInfo:(struct { long long x0; long long x1; long long x2; double x3; })a0 forLevel:(unsigned long long)a1;
- (long long)numberOfSectionInfosForLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (const struct { long long x0; long long x1; long long x2; double x3; } *)sectionInfosForLevel:(unsigned long long)a0;
- (BOOL)updateWithDataSourceAfterChanges:(id)a0 changeDetails:(id)a1;

@end
