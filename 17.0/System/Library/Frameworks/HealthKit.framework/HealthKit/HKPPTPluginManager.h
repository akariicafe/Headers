@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (id)init;
- (void).cxx_destruct;
- (void)_loadPPTBundles;
- (id)builtinTests;
- (Class)classForTestType:(id)a0;
- (void)registerDriverClass:(Class)a0;

@end
