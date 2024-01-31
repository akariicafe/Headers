@class NSString, VNEntityIdentificationModel;
@protocol VNEntityIdentificationModelDataSource;

@interface _VNEntityIdentificationModelDataSourceBasedTrainedModelDataProvider : NSObject <VNEntityIdentificationModelTrainedModelDataProvider> {
    VNEntityIdentificationModel *_entityIdentificationModel;
    id<VNEntityIdentificationModelDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentificationModel:(id)a0 dataSource:(id)a1;
- (unsigned long long)trainedModelEntityCount;
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)a0;
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)a0;
- (id)trainedModelObservationAtIndex:(unsigned long long)a0 forEntityAtIndex:(unsigned long long)a1;
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;

@end
