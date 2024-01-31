@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

@property (readonly, nonatomic) MPModelObject *model;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)_lightweightPersonalizationPropertiesForLyrics;
+ (id)requiredLightweightPersonalizationPropertiesForModelClass:(Class)a0 requestedProperties:(id)a1;
+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)a0;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;

- (id)initWithModel:(id)a0 personalizationStyle:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
