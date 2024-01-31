@class NSDictionary, NSString, TRIClient;

@interface MLModelCollection : NSObject

@property (copy, nonatomic) NSDictionary *entries;
@property (copy, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)_namespaceNameFromCollectionIdentifier:(id)a0;
+ (id)beginAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (Class)getTrialClientClass;
+ (Class)getTrialDownloadOptionsClass;
+ (Class)getTrialExperimentIdentifiersClass;
+ (Class)getTrialFactorClass;
+ (Class)getTrialFactorLevelClass;
+ (Class)getTrialFileClass;
+ (Class)getTrialLevelClass;

- (id)initWithIdentifier:(id)a0;
- (BOOL)_register;
- (void).cxx_destruct;
- (id)_downloadOptions;
- (BOOL)_downloadWithProgress:(id /* block */)a0;
- (BOOL)_endAccess;
- (void)_handleTrialUpdateForNamespaceName:(id)a0;
- (void)_populateEntries;
- (void)_registerForUpdates;
- (void)_setDeploymentID;

@end
