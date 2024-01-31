@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>

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
+ (id)filterDescription;
+ (BOOL)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)itemWithQuantitySample:(id)a0;
+ (id)itemWithQuantitySample:(id)a0 unit:(id)a1;
+ (id)itemWithQuantitySamples:(id)a0;
+ (id)itemWithQuantitySamples:(id)a0 unit:(id)a1;

- (id)sourceName;
- (id)startDate;
- (id)endDate;
- (id)unit;
- (id)duration;
- (id)quantitySample;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)preferredDisplayStyle;
- (id)categorySample;
- (id)localizedCategorySampleValue;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;

@end
