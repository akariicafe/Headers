@class NSString, SFFluidCollectionViewUpdate;
@protocol SFFluidCollectionDataContainer, UICoordinateSpace;

@interface SFFluidCollectionUnupdatedDataContainer : NSObject <SFFluidCollectionDataContainer, SFFluidCollectionLayoutContainer> {
    id<SFFluidCollectionDataContainer> _updatedDataContainer;
    SFFluidCollectionViewUpdate *_update;
}

@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) id<SFFluidCollectionDataContainer> dataContainer;

- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithLayoutContainer:(id)a0 update:(id)a1;
- (id)dataSourceIndexPathForIndexPath:(id)a0;
- (id)indexPathForDataSourceIndexPath:(id)a0;
- (void)layoutWasInvalidatedWithContext:(id)a0;

@end
