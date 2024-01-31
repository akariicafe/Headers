@interface DocumentUnderstandingClient.DocumentUnderstandingFeatureFlagReader : NSObject

@property (class, nonatomic, readonly) BOOL isBackboneModelEnabled;
@property (class, nonatomic, readonly) BOOL isTopicClassificationModelEnabled;
@property (class, nonatomic, readonly) BOOL isCategoryClassificationModelEnabled;
@property (class, nonatomic, readonly) BOOL isFoundInModelsEnabled;
@property (class, nonatomic, readonly) BOOL isIndexNonfileDocumentsEnabled;
@property (class, nonatomic, readonly) BOOL isSearchAndOrganizationDocumentIngestEnabled;
@property (class, nonatomic, readonly) BOOL isAutonamingFromMessagesEnabled;

- (id)init;

@end
