@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>

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
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (BOOL)getListAltText:(id /* block */)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)preferredDisplayStyle;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 named:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 completionHandler:(id /* block */)a2;

@end
