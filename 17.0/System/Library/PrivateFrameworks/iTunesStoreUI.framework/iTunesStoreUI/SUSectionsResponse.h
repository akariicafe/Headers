@class SUClientInterface, NSString, NSArray, UIImage, NSMutableDictionary, NSDictionary, SSItemImageCollection, NSNumber;

@interface SUSectionsResponse : NSObject {
    SUClientInterface *_clientInterface;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
}

@property (readonly, nonatomic) NSArray *allSections;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (nonatomic) BOOL shouldResetUserOrdering;
@property (retain, nonatomic) UIImage *moreListImage;
@property (readonly, nonatomic) SSItemImageCollection *moreListImageCollection;
@property (retain, nonatomic) UIImage *moreListSelectedImage;
@property (readonly, nonatomic) NSString *moreListTitle;
@property (readonly, copy, nonatomic) NSMutableDictionary *rawResponseDictionary;
@property (readonly, nonatomic) long long responseType;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionsDictionary;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) NSString *versionString;

+ (void)setLastCachedVersionIdentifier:(id)a0;
+ (id)lastCachedVersionIdentifier;
+ (id)sectionsCacheDirectory;

- (id)init;
- (void)dealloc;
- (BOOL)_loadArtworkFromCacheDirectory:(id)a0;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)a0;
- (void)_dropImageKeysFromArray:(id)a0;
- (void)_dropImageKeysFromDictionary:(id)a0;
- (void)_loadButtonArtworkForSection:(id)a0 buttons:(id)a1 cachePath:(id)a2;
- (id)_newImageForIdentifier:(id)a0 variant:(id)a1 cacheDirectory:(id)a2;
- (id)_newSectionsFromDictionary:(id)a0;
- (id)_newVariantStringForButton:(id)a0;
- (void)_writeButtonImagesForSection:(id)a0 buttons:(id)a1 cachePath:(id)a2;
- (void)_writeImage:(id)a0 toCachePath:(id)a1 forIdentifier:(id)a2 variant:(id)a3;
- (void)dropEmbeddedImages;
- (id)initWithClientInterface:(id)a0 cacheDirectory:(id)a1;
- (id)initWithClientInterface:(id)a0 sectionsDictionary:(id)a1 responseType:(long long)a2;
- (BOOL)writeToCacheDirectory:(id)a0 error:(id *)a1;

@end
