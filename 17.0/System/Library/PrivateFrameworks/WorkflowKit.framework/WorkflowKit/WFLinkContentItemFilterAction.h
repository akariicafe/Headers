@class INAppIntentDescriptor, LNFullyQualifiedActionIdentifier, NSDictionary, LNQueryMetadata, LNMetadataProvider, LNEntityMetadata;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}

@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;

- (id)metadataProvider;
- (void).cxx_destruct;
- (id)name;
- (id)displayableAppDescriptor;
- (id)propertyQuery;
- (id)outputDictionary;
- (id)copyWithSerializedParameters:(id)a0;
- (id)descriptionSummary;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (void)finishRunningWithOutput:(id)a0 randomSortOrder:(BOOL)a1 error:(id)a2;
- (id)initWithIdentifier:(id)a0 queryMetadata:(id)a1 entityMetadata:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (BOOL)isInMemoryFindAction;
- (id)linkValueTypes;
- (id)localizedKeywords;
- (id)localizedSubcategoryForCategory:(id)a0;
- (id)propertiesByPropertyIdentifier;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)sortingOptionsWithRandomSortOrder:(BOOL *)a0;

@end
