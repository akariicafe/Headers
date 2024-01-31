@class NSString;

@interface _EARAppLmArtifact : _EARArtifact {
    struct shared_ptr<quasar::AppLmData> { struct AppLmData *__ptr_; struct __shared_weak_count *__cntrl_; } _cachedLmData;
    NSString *_cachedConfigFilepath;
    NSString *_cachedNcsRoot;
    NSString *_cachedDataRoot;
}

+ (BOOL)createEmptyArtifact:(id)a0 version:(id)a1 locale:(id)a2 saveTo:(id)a3;
+ (BOOL)createPhraseCountsArtifact:(id)a0 version:(id)a1 locale:(id)a2 rawPhraseCountsPath:(id)a3 customPronunciationsPath:(id)a4 saveTo:(id)a5;
+ (id)loadLmHandleFromArtifactAt:(id)a0 configPath:(id)a1;
+ (id)loadLmHandleFromArtifactAt:(id)a0 configPath:(id)a1 ncsRoot:(id)a2;
+ (id)transitionArtifactAt:(id)a0 toStage:(unsigned long long)a1 configPath:(id)a2 dataRoot:(id)a3 estimationRoot:(id)a4 minimize:(BOOL)a5;
+ (BOOL)transitionArtifactAt:(id)a0 toStage:(unsigned long long)a1 configPath:(id)a2 dataRoot:(id)a3 estimationRoot:(id)a4 minimize:(BOOL)a5 saveTo:(id)a6;
+ (id)transitionArtifactAt:(id)a0 toStage:(unsigned long long)a1 configPath:(id)a2 ncsRoot:(id)a3 dataRoot:(id)a4 estimationRoot:(id)a5 minimize:(BOOL)a6;
+ (BOOL)transitionArtifactAt:(id)a0 toStage:(unsigned long long)a1 configPath:(id)a2 ncsRoot:(id)a3 dataRoot:(id)a4 estimationRoot:(id)a5 minimize:(BOOL)a6 saveTo:(id)a7;

- (id)initWithPath:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)loadAppLmData:(id)a0 ncsRoot:(id)a1 dataRoot:(id)a2;
- (void)_cacheLmData:(struct shared_ptr<quasar::AppLmData> { struct AppLmData *x0; struct __shared_weak_count *x1; })a0 configFilepath:(id)a1 ncsRoot:(id)a2 dataRoot:(id)a3;
- (struct shared_ptr<quasar::AppLmData> { struct AppLmData *x0; struct __shared_weak_count *x1; })_loadRawAppLmData:(id)a0 ncsRoot:(id)a1 dataRoot:(id)a2;
- (struct shared_ptr<quasar::AppLmData> { struct AppLmData *x0; struct __shared_weak_count *x1; })_tryToLoadCachedLmData:(id)a0 ncsRoot:(id)a1 dataRoot:(id)a2;
- (unsigned long long)getLifeCycleStage;
- (id)initWithAppLmArtifact:(struct shared_ptr<quasar::artifact::AppLmArtifact> { struct AppLmArtifact *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithVersion:(id)a0 andLocale:(id)a1;
- (BOOL)isAdaptableToSpeechModelVersion:(id)a0 locale:(id)a1;
- (id)loadAppLmData:(id)a0 dataRoot:(id)a1;
- (id)loadCustomPronData:(id)a0 dataRoot:(id)a1;
- (id)loadCustomPronData:(id)a0 ncsRoot:(id)a1 dataRoot:(id)a2;
- (id)loadLmHandle;
- (id)loadOovs;

@end
