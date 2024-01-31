@class NSCache, PXStoryColorGradingConfiguration, NSObject;
@protocol OS_os_log;

@interface PXStoryConcreteColorGradingRepository : NSObject <PXStoryColorGradingRepository>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSCache *colorLookupCubeCache;
@property (readonly, nonatomic) PXStoryColorGradingConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long minimumCategoryKindFallbacks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (id)_cachedColorLookupCubeForColorGradeKind:(long long)a0;
- (id)_createColorLookupCubeForColorGradeKind:(long long)a0;
- (id)_createCustomColorLookupCubeForResourceName:(id)a0;
- (id)_cubeResourceNameForColorGradeKind:(long long)a0;
- (void)_enumerateSupporedColorGradeCategoriesUsingBlock:(id /* block */)a0;
- (id)_loadCustomColorLookupCubeForResourceName:(id)a0;
- (void)_writeTemporaryFileWithCompressedColorCube:(id)a0 forResourceName:(id)a1;
- (long long)colorGradeKindForColorGradeCategory:(id)a0;
- (long long)colorGradeKindForColorGradeCategory:(id)a0 excludingKinds:(id)a1;
- (id)colorLookupCubeForColorGradeKind:(long long)a0;
- (id)localizedTitleForColorGradeKind:(long long)a0;
- (void)startPreloadingWithCompletionHandler:(id /* block */)a0;
- (id)supportedColorGradeKinds;
- (id)supportedUserPickableColorGradeKinds;

@end
