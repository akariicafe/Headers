@class NSString, CLSSignalNode;

@interface CLSIVSNSFWModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *anyNode;
@property (readonly) CLSSignalNode *femaleBreastNode;
@property (readonly) CLSSignalNode *maleBreastNode;
@property (readonly) CLSSignalNode *buttocksNode;
@property (readonly) CLSSignalNode *explicitNode;
@property (readonly) CLSSignalNode *femaleGenitalsNode;
@property (readonly) CLSSignalNode *maleGenitalsNode;
@property (readonly) CLSSignalNode *noneNode;
@property (readonly) CLSSignalNode *underwearNode;
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
- (void)setupVersion61;
- (void)setupVersion76;
- (void)setupVersion95;
- (void)setupVersion98;

@end
