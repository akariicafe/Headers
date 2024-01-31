@class PXSectionedDataSource, NSString;
@protocol PXInboxModelDataSourceBase, PXInboxProviderSource;

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>

@property (readonly, nonatomic) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource;
@property (readonly, nonatomic) id<PXInboxProviderSource> providerSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
