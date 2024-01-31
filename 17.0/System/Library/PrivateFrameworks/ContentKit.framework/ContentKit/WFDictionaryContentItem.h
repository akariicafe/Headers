@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *dictionary;
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
+ (id)itemsWithPropertyListObject:(id)a0 preferredDictionaryType:(id)a1 attributionSet:(id)a2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)itemsWithJSONFileRepresentation:(id)a0 attributionSet:(id)a1;
+ (id)itemsWithPlistFileRepresentation:(id)a0 attributionSet:(id)a1;
+ (id)itemsWithPropertyListObject:(id)a0 preferredDictionaryType:(id)a1 topLevelName:(id)a2 attributionSet:(id)a3;

- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)allowedClassesForDecodingInternalRepresentations;

@end
