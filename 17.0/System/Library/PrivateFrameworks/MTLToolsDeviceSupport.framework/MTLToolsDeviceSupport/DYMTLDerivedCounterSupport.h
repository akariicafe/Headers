@class NSString, NSMutableDictionary;

@interface DYMTLDerivedCounterSupport : NSObject

@property (readonly, nonatomic) NSMutableDictionary *counterDictionary;
@property (readonly, nonatomic) NSString *derivedCounterScript;
@property (readonly, nonatomic) NSString *analysisScript;
@property (readonly, nonatomic) NSMutableDictionary *configurationVariables;
@property (readonly, nonatomic) NSString *metalPluginName;

+ (void)mergeDictionaries:(id)a0 right:(id)a1;

- (id)initWithAcceleratorPort:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMTLDevice:(id)a0;
- (void)_addGPUTimeEntry;
- (void)_loadAnalysis:(id)a0 vendorStringNames:(id)a1 vendorScriptPrefix:(id)a2;
- (BOOL)addAnalysisWithPrefix:(id)a0 andScriptPrefix:(id)a1;

@end
