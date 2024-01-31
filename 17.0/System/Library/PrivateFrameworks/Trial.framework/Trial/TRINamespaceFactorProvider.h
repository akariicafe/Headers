@class NSCache, NSString, NSMutableDictionary, TRIFBFastFactorLevels, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIPaths;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_treatmentId;
    unsigned int _namespaceCompatibilityVersion;
    id<TRIFactorLevelCaching> _factorLevels;
    TRIReferenceManagedDirReaderLock *_factorDirectoryLock;
    id<TRIPaths> _paths;
    NSCache *_factorLevelCache;
    NSMutableDictionary *_warmupPersistentFactorLevelCache;
    BOOL _isFBFilePresent;
    BOOL _isFBReadEnabled;
    BOOL _isFBWriteEnabled;
    TRIFBFastFactorLevels *_fastFactorLevels;
    NSString *_referencePath;
}

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathForFactor:(id)a0 directory:(id)a1;
+ (id)factorProviderWithNamespaceDescriptor:(id)a0 paths:(id)a1 faultOnMissingFactors:(BOOL)a2 shouldLockFactorDirectory:(BOOL)a3;
+ (id)_maAutoAssetReferencedInDir:(id)a0 byFactorName:(id)a1;
+ (id)populateMAPathsForFactorLevels:(id)a0 loadedFromParentDir:(id)a1;
+ (id)factorLevelsWithTreatmentData:(id)a0 referencePath:(id)a1 filteredByNamespaceName:(id)a2 outTreatmentId:(id *)a3 error:(id *)a4;
+ (id)factorProviderWithNamespaceName:(id)a0 paths:(id)a1 treatmentLayer:(unsigned long long)a2 faultOnMissingFactors:(BOOL)a3 shouldLockFactorDirectory:(BOOL)a4;
+ (id)_assetFilenameForFactor:(id)a0;

- (id)experimentId;
- (id)treatmentId;
- (id)_readAllFactorLevelsFromStorage;
- (id)_copyAssetsToDirectory:(id)a0;
- (int)deploymentId;
- (id)initWithNamespaceName:(id)a0 treatmentData:(id)a1 namespaceCompatibilityVersion:(unsigned int)a2 paths:(id)a3 referencePath:(id)a4 isFlatbufferStorage:(BOOL)a5 factorDirectoryLock:(id)a6 error:(id *)a7;
- (void)dispose;
- (id)overlayLevelsFromFactorProvider:(id)a0;
- (id)levelForFactor:(id)a0;
- (BOOL)saveToPath:(id)a0 copyAssets:(BOOL)a1;
- (BOOL)overwriteItemAtPath:(id)a0 withItemAtPath:(id)a1 error:(id *)a2;
- (void)cacheFactorLevels;
- (unsigned int)namespaceId;
- (id)initWithNamespaceName:(id)a0 namespaceCompatibilityVersion:(unsigned int)a1 paths:(id)a2 referencePath:(id)a3 factorLevels:(id)a4 fastFactorLevels:(id)a5 treatmentId:(id)a6 factorDirectoryLock:(id)a7;
- (void)setCacheSizeForFlatbuffers:(int)a0;
- (void).cxx_destruct;
- (id)rolloutId;
- (id)factorLevels;

@end
