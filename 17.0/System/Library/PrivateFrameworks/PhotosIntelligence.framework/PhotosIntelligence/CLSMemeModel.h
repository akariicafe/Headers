@class NSString, CLSSignalNode;

@interface CLSMemeModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *negativeNode;
@property (readonly) CLSSignalNode *documentNode;
@property (readonly) CLSSignalNode *memeScreenshotEtcNode;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)modelInfo;
- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (BOOL)isMemeFromSceneClassifications:(id)a0;
- (BOOL)isMemeExclusiveFromSceneClassifications:(id)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion55;
- (void)setupVersion59;
- (void)setupVersion62;

@end
