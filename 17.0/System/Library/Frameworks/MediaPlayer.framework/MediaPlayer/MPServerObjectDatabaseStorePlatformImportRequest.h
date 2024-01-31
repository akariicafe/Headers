@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_unsupportedParentChildRelationships;
+ (id)_childKeyForParentType:(id)a0 type:(id)a1;
+ (id)_entityTypeForObject:(id)a0;
+ (id)_unsupportedStorePlatformKinds;

- (id)performWithDatabaseOperations:(id)a0 augmentingPayload:(id *)a1 trustID:(id)a2 playActivityFeatureName:(id)a3;
- (id)initWithPayload:(id)a0;

@end
