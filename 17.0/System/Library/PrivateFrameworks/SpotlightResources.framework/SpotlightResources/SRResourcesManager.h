@interface SRResourcesManager : NSObject

+ (BOOL)parsecEnabled;
+ (void)initialize;
+ (id)sharedResourcesManager;
+ (id)defaultParameterWithType:(long long)a0 value:(id)a1 name:(id)a2;
+ (void)dumpParameterList:(id)a0;
+ (void)fetchOverrideList;
+ (void)fetchParameterList;
+ (void)fetchUserDefaults;
+ (long long)parameterTypeFromString:(id)a0;
+ (void)setTrialUpdateHandler;
+ (void)updateDefaultParameter:(id)a0 withValue:(id)a1;

- (id)initWithOptions:(id)a0;
- (void)loadAllParametersForClient:(id)a0;
- (id)resourcesForClient:(id)a0 options:(id)a1;
- (id)resourcesForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1;
- (void)loadDataSource:(id)a0;
- (void)fetchAllParametersForLanguages:(id)a0 resourcePath:(id)a1;
- (void)loadAllParameters;
- (void)loadAllParametersForClient:(id)a0 locale:(id)a1 options:(id)a2;
- (void)refreshTrialForClient:(id)a0;

@end
