@protocol NTKComplicationStoreClient;

@interface _NTKComplicationStoreClientProxy : NSObject {
    id<NTKComplicationStoreClient> _proxy;
}

- (void).cxx_destruct;
- (id)initWithWeakProxy:(id)a0;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)a0 complicationDescriptors:(id)a1 seqId:(id)a2;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)a0 descriptor:(id)a1 seqId:(id)a2;
- (void)updateComplicationDescriptors:(id)a0 forClientIdentifier:(id)a1 seqId:(id)a2;
- (void)updateSampleTemplateReference:(id)a0 forClientIdentifier:(id)a1 descriptor:(id)a2 family:(long long)a3 seqId:(id)a4;

@end
