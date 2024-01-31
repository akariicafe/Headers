@class NSString, CLSSignalNode;

@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *bloodNode;
@property (readonly) CLSSignalNode *demonstrationNode;
@property (readonly) CLSSignalNode *destructionNode;
@property (readonly) CLSSignalNode *fireDevastationNode;
@property (readonly) CLSSignalNode *floodDevastationNode;
@property (readonly) CLSSignalNode *funeralNode;
@property (readonly) CLSSignalNode *hospitalNode;
@property (readonly) CLSSignalNode *religiousSettingNode;
@property (readonly) CLSSignalNode *vehicleCrashNode;
@property (readonly) CLSSignalNode *warNode;
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
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion32;
- (void)setupVersion33;
- (void)setupVersion50_4;
- (void)setupVersion85;

@end
