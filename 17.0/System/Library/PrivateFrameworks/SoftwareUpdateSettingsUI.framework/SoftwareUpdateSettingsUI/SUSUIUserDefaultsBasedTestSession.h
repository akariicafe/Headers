@class NSString, NSMutableDictionary, SUSMKUserDefaultsCodedTestCaseSession;

@interface SUSUIUserDefaultsBasedTestSession : NSObject <SoftwareUpdateSettingsMockingKit.SUSMKTestCaseSession> {
    NSMutableDictionary *_services;
    NSMutableDictionary *_servicesClasses;
    SUSMKUserDefaultsCodedTestCaseSession *_session;
}

@property (readonly, nonatomic) long long currentPhase;
@property (readonly, copy, nonatomic) NSString *correlationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)current;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)beginTestAndReturnError:(id *)a0;
- (long long)currentExecutionResult;
- (BOOL)endTestWithResult:(long long)a0 error:(id *)a1;
- (void)handleChangedPhase:(long long)a0;
- (void)handlePhaseConfigurationSealed;
- (void)handlePhaseFinished;
- (void)handlePhaseRunning;
- (id)initWithStoredSession:(id)a0;
- (Class)strategyClassForServiceType:(long long)a0;
- (id)strategyForServiceType:(long long)a0;

@end
