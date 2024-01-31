@class NSString, NSUUID, NSArray, NSLocale;

@interface CDMClientSetup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *serviceStateDirectorySandboxExtension;
@property (readonly) NSLocale *localeIdentifier;
@property (readonly) NSString *embeddingVersion;
@property (readonly) NSString *sandboxId;
@property (readonly) NSString *activeServiceGraph;
@property (readonly) NSString *assetDirPath;
@property (readonly) NSString *invocationSource;
@property (readonly) NSUUID *nlSetupId;
@property (readonly) NSArray *overrideSiriVocabSpans;
@property (readonly) NSString *serviceStateDirectory;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4 serviceStateDirectory:(id)a5 embeddingVersion:(id)a6 nlSetupId:(id)a7 invocationSource:(id)a8;
- (void)createSandboxExtensionForXPC;
- (id)initWithLocaleIdentifier:(id)a0 embeddingVersion:(id)a1 sandboxId:(id)a2 activeServiceGraph:(id)a3;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4 serviceStateDirectory:(id)a5;

@end
