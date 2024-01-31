@class NSString, NSDictionary, WFFileType, WFShazamMedia, WFObjectType;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFShazamMedia *media;
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
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

- (id)videoURL;
- (id)artist;
- (id)artworkURL;
- (id)title;
- (id)isExplicit;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)appleMusicID;
- (id)appleMusicURL;
- (id)lyricsSnippet;
- (id)shazamURL;
- (void)getArtworkDataWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)lyricsSnippetSynced;

@end
