@class NSString;
@protocol NTKCollectionClient;

@interface _NTKCollectionClientProxy : NSObject <NTKCollectionClient> {
    id<NTKCollectionClient> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFaceForUUID:(id)a0 seqId:(id)a1 completion:(id /* block */)a2;
- (void)resetClientCollectionWithCompletion:(id /* block */)a0;
- (void)upgradeFaceInstanceDescriptor:(id)a0 forUUID:(id)a1 seqID:(id)a2;
- (void)updateSelectedFaceUUID:(id)a0 seqId:(id)a1;
- (void)flushCompleteForIdentifier:(id)a0;
- (void)updateFaceForUUID:(id)a0 withResourceDirectory:(id)a1 seqId:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)loadFullCollectionWithOrderedUUIDs:(id)a0 selectedUUID:(id)a1 facesDescriptorsByUUID:(id)a2 seqId:(id)a3 completion:(id /* block */)a4;
- (void)addFaceInstanceDescriptor:(id)a0 forUUID:(id)a1 seqId:(id)a2;
- (id)initWithWeakProxy:(id)a0;
- (void)updateOrderedFaceUUIDs:(id)a0 seqId:(id)a1;
- (void)updateFaceForUUID:(id)a0 withConfigurationJSONRepresentation:(id)a1 seqId:(id)a2;

@end
