@class NSArray, PXSectionedDataSource;

@interface PXGDataSourceChange : NSObject

@property (readonly, nonatomic) NSArray *changeDetails;
@property (readonly, nonatomic) PXSectionedDataSource *dataSourceBeforeChanges;
@property (readonly, nonatomic) PXSectionedDataSource *dataSourceAfterChanges;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChangeDetails:(id)a0 dataSourceBeforeChanges:(id)a1 dataSourceAfterChanges:(id)a2;

@end
