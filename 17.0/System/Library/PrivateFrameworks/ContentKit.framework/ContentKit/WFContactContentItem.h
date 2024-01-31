@class WFContact, NSDictionary, WFFileType, WFObjectType, NSString;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFContact *contact;
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
+ (id)contentCategories;
+ (id)countDescription;
+ (BOOL)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)cachedContactGroups;

- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)objectRepresentationsFromLabeledValues:(id)a0;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)a0;

@end
