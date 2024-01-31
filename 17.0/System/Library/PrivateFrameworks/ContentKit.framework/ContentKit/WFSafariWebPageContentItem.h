@class NSString, NSDictionary, WFFileType, WFSafariWebPage, WFObjectType;

@interface WFSafariWebPageContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFSafariWebPage *webPage;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (BOOL)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)getSerializedItem:(id /* block */)a0;

@end
