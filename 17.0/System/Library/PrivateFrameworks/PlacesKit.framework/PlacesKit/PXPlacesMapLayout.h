@class NSString;
@protocol PXPlacesMapPipelineComponentProvider, PXPlacesGeotaggedItemDataSource;

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout>

@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)layoutForViewPort:(id)a0 andDataSourceChange:(id)a1;
- (id)layoutItemForGeotaggable:(id)a0;

@end
