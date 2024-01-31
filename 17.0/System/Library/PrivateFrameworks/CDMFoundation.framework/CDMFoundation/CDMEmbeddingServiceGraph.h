@interface CDMEmbeddingServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requiredDAGServices;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithResponseCmd:(id)a0;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
