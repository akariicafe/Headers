@class NSArray, NSString, NSDictionary, NSSet, SSNetworkConstraints, ISURLBagBackend, SSURLBagContext;

@interface ISURLBag : NSObject {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    ISURLBagBackend *_bagBackend;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
}

@property (readonly, nonatomic) NSString *bagBackendKey;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) double invalidationTime;
@property (nonatomic) BOOL loadedFromDiskCache;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, nonatomic) NSDictionary *URLBagDictionary;
@property (readonly, nonatomic) long long versionIdentifier;
@property (readonly) NSSet *availableStorefrontItemKinds;

+ (id)storeFrontURLBagKeyForItemKind:(id)a0;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)_sharedBagBackend;
+ (id)copyExtraHeadersForURL:(id)a0 inBagContext:(id)a1;
+ (id)networkConstraintsForDownloadKind:(id)a0 inBagContext:(id)a1;
+ (BOOL)shouldSendGUIDForURL:(id)a0 inBagContext:(id)a1;
+ (id)urlBagForContext:(id)a0;
+ (id)urlForKey:(id)a0 inBagContext:(id)a1;
+ (BOOL)urlIsTrusted:(id)a0 inBagContext:(id)a1;
+ (id)valueForKey:(id)a0 inBagContext:(id)a1;

- (id)_networkConstraintsCachePath;
- (id)initWithURLBagContext:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_copyHeaderPatternsFromBagBackend;
- (id)initWithContentsOfFile:(id)a0;
- (id)URLForURL:(id)a0 clientIdentifier:(id)a1;
- (void)_writeURLResolutionCacheFile;
- (BOOL)urlIsTrusted:(id)a0;
- (id)initWithRawDictionary:(id)a0;
- (BOOL)shouldSendGUIDForURL:(id)a0;
- (id)searchQueryParametersForClientIdentifier:(id)a0 networkType:(long long)a1;
- (BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)a0;
- (void)_setBagBackendWithDictionary:(id)a0;
- (void)_preprocessURLResolutionCacheDictionary:(id)a0;
- (void)_toggleStopSendingLocalCookies;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)networkConstraintsForDownloadKind:(id)a0;
- (void).cxx_destruct;
- (void)setInvalidationTimeWithExprationInterval:(double)a0;
- (id)urlForKey:(id)a0;
- (void)_writeNetworkConstraintsCacheFile;
- (BOOL)loadFromDictionary:(id)a0 returningError:(id *)a1;
- (id)_copyGUIDSchemesFromBagBackend;
- (id)valueForKey:(id)a0;
- (id)_copyGUIDPatternsFromBagBackend;
- (id)sanitizedURLForURL:(id)a0;
- (id)copyExtraHeadersForURL:(id)a0;

@end
