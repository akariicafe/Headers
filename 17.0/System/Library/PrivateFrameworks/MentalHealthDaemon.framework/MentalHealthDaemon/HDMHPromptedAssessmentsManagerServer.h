@class NSString, HDMHPromptedAssessmentsManager;

@interface HDMHPromptedAssessmentsManagerServer : HDStandardTaskServer <HKMHPromptedAssessmentsManagerServer, HDMHPromptedAssessmentsManagerObserver> {
    HDMHPromptedAssessmentsManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)remote_stopObservingChanges;
- (void)remote_getPromptedAssessmentsWithCompletion:(id /* block */)a0;
- (void)promptedAssessmentsManagerDidUpdatePromptedAssessments:(id)a0;

@end
