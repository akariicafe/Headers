@class NSDictionary, SUCoreSimulateEvent, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreSimulate : NSObject

@property (nonatomic) int alterationsPerformed;
@property (retain, nonatomic) SUCoreSimulateEvent *lastAlteration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *simulateQueue;
@property (readonly, nonatomic) BOOL simulatorEnabled;
@property (retain, nonatomic) NSDictionary *eventAlterations;
@property (copy, nonatomic) id /* block */ registeredCallback;

+ (id)sharedSimulator;

- (id)init;
- (BOOL)_parseErrorCodeFromString:(id)a0 destination:(long long *)a1;
- (BOOL)_parseEventBooleanFromString:(id)a0 destination:(long long *)a1;
- (void)adoptAllEventAlterations:(id)a0;
- (id)_performOffQueueEvent:(id)a0;
- (int)countOfAlterationsPerformed;
- (void)dumpAllEventAlterations;
- (id)fsm:(id)a0 forEvent:(id)a1 inState:(id)a2;
- (BOOL)_parseOptionalEntriesInLineFromWords:(id)a0 argStartAt:(int *)a1 argEndAt:(int *)a2 argDuration:(int *)a3 argUntilStop:(id *)a4 argAssetBuildVersions:(id *)a5 argAssetProductVersions:(id *)a6 argAssetAttributesPlist:(id *)a7 argAssetState:(id *)a8 argUpdateInfoPlist:(id *)a9 argErrorDomain:(id *)a10 argErrorCode:(long long *)a11 argErrorRecoverable:(long long *)a12;
- (id)_locateEventForModule:(id)a0 forIdentity:(id)a1 withTrigger:(long long)a2 forEvent:(id)a3 inState:(id)a4;
- (void)_adoptAllEventAlterations:(id)a0;
- (BOOL)_isValidEvent:(id)a0;
- (BOOL)_parseIntFromString:(id)a0 destination:(int *)a1;
- (id)end:(id)a0 atFunction:(id)a1;
- (BOOL)_isImmediateEvent:(id)a0;
- (void)_triggerOffQueueAlteration:(id)a0;
- (void)clearAllEventAlterations;
- (void)_performingAlteration:(id)a0;
- (void).cxx_destruct;
- (long long)_triggerFromString:(id)a0;
- (id)lastAlterationPerformed;
- (void)registerCallbackHandler:(id /* block */)a0;
- (long long)_actionFromString:(id)a0;
- (id)begin:(id)a0 atFunction:(id)a1;
- (id)_eventFromLine:(id)a0;
- (void)_dumpAllEventAlterations;
- (id)generateError:(id)a0 ofDomain:(id)a1 withCode:(long long)a2;
- (id)_performSimulatedEventAlteration:(id)a0;

@end
