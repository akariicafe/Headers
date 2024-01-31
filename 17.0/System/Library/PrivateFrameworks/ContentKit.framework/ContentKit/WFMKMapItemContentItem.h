@class NSString, NSDictionary, WFFileType, CLLocation, MKMapItem, WFObjectType;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) CLLocation *queryLocation;
@property (readonly, nonatomic) MKMapItem *mapItem;
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
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)itemWithMapItem:(id)a0 fromQueryLocation:(id)a1 origin:(id)a2 disclosureLevel:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (unsigned long long)preferredDisplayStyle;

@end
