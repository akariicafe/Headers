@class NSDate, NSString, NSData, NSURL, PKDataAccessor, PKContent, PKImageSet, PKDisplayProfile, PKDisplayTraitCollection;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKContent *_content;
    PKImageSet *_imageSets[8];
    PKDisplayTraitCollection *_preferredDisplayTraits;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) PKDataAccessor *dataAccessor;
@property (retain, nonatomic) PKDisplayProfile *displayProfile;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;
@property (copy, nonatomic) NSDate *signingDate;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long shareCount;
@property (readonly, nonatomic) BOOL initializedViaInitWithCoder;
@property (nonatomic) double preferredImageScale;
@property (retain, nonatomic) NSString *preferredImageSuffix;
@property (retain, nonatomic) PKDisplayTraitCollection *preferredDisplayTraits;

+ (Class)classForDictionary:(id)a0 bundle:(id)a1;
+ (BOOL)isValidObjectWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3 signingDate:(id *)a4 passDictionary:(id)a5;
+ (id)fetchSigningDateForObjectWithFileDataAccessor:(id)a0 passDictionary:(id)a1;
+ (id)dataTypeIdentifier;
+ (Class)resolvingClass;
+ (unsigned long long)defaultSettings;
+ (id)_createWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3;
+ (id)createWithData:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)createWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3;
+ (id)createWithFileDataAccessor:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)createWithFileURL:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)createWithValidatedFileDataAccessor:(id)a0;

- (void)setContent:(id)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (id)init;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)content;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataForBundleResources:(id)a0;
- (id)modificationDate;
- (void)encodeWithCoder:(id)a0;
- (void)noteShared;
- (id)passLocalizedStringForKey:(id)a0;
- (id)archiveData;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (void)loadContentSync;
- (BOOL)isContentLoaded;
- (void)loadContentAsyncWithCompletion:(id /* block */)a0;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (void)_lock_flushLoadedImageSets;
- (id)contentLoadedIfNeeded;
- (void)downloadRemoteAssetsForSEIDS:(id)a0 completion:(id /* block */)a1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 seids:(id)a1 completion:(id /* block */)a2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)flushLoadedImageSets;
- (id)imageSetLoadedIfNeeded:(long long)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (BOOL)isImageSetLoaded:(long long)a0;
- (BOOL)isImageSetType:(long long)a0 equalToImageSetTypeFromObject:(id)a1;
- (void)loadCachedImageSet:(long long)a0;
- (void)loadImageSetAsync:(long long)a0 preheat:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)loadImageSetSync:(long long)a0 preheat:(BOOL)a1;
- (id)localizedString:(id)a0;
- (id)preferredDisplayTraits;
- (void)reloadDisplayProfileOfType:(long long)a0;
- (id)serializedFileWrapper;
- (void)setImageSet:(id)a0 forImageSetType:(long long)a1;
- (void)setMissingImageSetsFromObject:(id)a0;
- (void)setPreferredDisplayTraits:(id)a0;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)a0;

@end
