@class NSString, NSArray, CDMNLAssetCollection, CDMEmbeddingConfigs;

@interface CDMDynamicConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *embeddingVersion;
@property (readonly, nonatomic) NSString *graphName;
@property (readonly, nonatomic) NSString *siriVocabularySandboxId;
@property (readonly, nonatomic) CDMNLAssetCollection *assetCollection;
@property (readonly, nonatomic) NSString *assetDirPath;
@property (readonly, nonatomic) NSArray *overrideSiriVocabSpans;
@property (readonly, nonatomic) NSArray *overrideMentions;
@property (readonly, nonatomic) NSArray *overrideContextualSpans;
@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs;
@property (readonly, nonatomic) NSString *serviceStateDirectory;

+ (id)resolveActiveGraph:(id)a0;

- (unsigned long long)hash;
- (void)setLanguageCode:(id)a0;
- (id)description;
- (id)initWithLanguageCode:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAssetCollection:(id)a0;
- (void)setEmbeddingVersion:(id)a0;
- (id)assetPaths;
- (id)getAssetBundlePathForFactorName:(id)a0;
- (id)getAssetForFactorName:(id)a0;
- (id)initWithLanguageCode:(id)a0 embeddingVersion:(id)a1 graphName:(id)a2 sandboxId:(id)a3 assetPaths:(id)a4 assetDirPath:(id)a5 overrideSiriVocabSpans:(id)a6 overrideMentions:(id)a7 overrideContextualSpans:(id)a8 serviceStateDirectory:(id)a9;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetDirPath:(id)a3;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4 overrideMentions:(id)a5 overrideContextualSpans:(id)a6;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3 assetDirPath:(id)a4 overrideSiriVocabSpans:(id)a5 overrideMentions:(id)a6 overrideContextualSpans:(id)a7 serviceStateDirectory:(id)a8;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3 overrideSiriVocabSpans:(id)a4 overrideMentions:(id)a5 overrideContextualSpans:(id)a6;
- (BOOL)isEqualWithoutSandboxId:(id)a0;
- (void)setAssetDirPath:(id)a0;
- (void)setAssetPaths:(id)a0;
- (void)setEmbeddingConfigs:(id)a0;
- (void)setGraphName:(id)a0;
- (void)setOverrideContextualSpans:(id)a0;
- (void)setOverrideMentions:(id)a0;
- (void)setOverrideSiriVocabSpans:(id)a0;
- (void)setServiceStateDirectory:(id)a0;
- (void)setSiriVocabularySandboxId:(id)a0;

@end
