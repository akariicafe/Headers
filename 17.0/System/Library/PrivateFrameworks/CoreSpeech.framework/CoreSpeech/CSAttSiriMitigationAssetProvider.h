@class NSString, CSUAFAssetManager;

@interface CSAttSiriMitigationAssetProvider : NSObject

@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_getAssetToUseWithCompletion:(id /* block */)a0;
- (void)getAllowPhrasesListOverrideFileWithCompletion:(id /* block */)a0;
- (void)getNeuralCombinerConfigFileWithCompletion:(id /* block */)a0;
- (id)initWithUAFAssetManager:(id)a0 withAssetOverrideFlag:(BOOL)a1 withOverrideAssetPath:(id)a2;

@end
