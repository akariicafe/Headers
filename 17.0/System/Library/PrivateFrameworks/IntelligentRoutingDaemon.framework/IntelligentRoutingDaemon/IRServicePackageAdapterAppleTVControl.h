@class NSMutableDictionary, NSDictionary, IRCandidateWrapperOrderOfExection, NSString;

@interface IRServicePackageAdapterAppleTVControl : NSObject <IRServicePackageAdapter>

@property (retain, nonatomic) NSMutableDictionary *internalContexts;
@property (retain, nonatomic) NSMutableDictionary *internalPolicyInspections;
@property (retain, nonatomic) IRCandidateWrapperOrderOfExection *internalOrderOfExecution;
@property (readonly, nonatomic) NSDictionary *contexts;
@property (readonly, nonatomic) NSDictionary *policyInspections;
@property (readonly, nonatomic) NSDictionary *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_filteredClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_autoRouteClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_autoRoutePositiveRulesClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (void)_classifyContext:(id)a0;
- (void)_evaluateOutputRules:(id)a0 contextWrapper:(id)a1;
- (id)_oneTapClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_oneTapClassificationPositiveRulesForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_reasonsForRejectingAutoRouteOrOneTapClassificationForCandidate:(id)a0;
- (id)_topOfListClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_topOfListClassificationPositiveRulesForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)filterHistory:(id)a0;
- (BOOL)outputRulesToContext:(id)a0 candidatesContainer:(id)a1 fillInspection:(BOOL)a2;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0;
- (BOOL)shouldLabelMiLoForEvent:(id)a0;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1;
- (id)uiAnalyticsWithEvent:(id)a0 forCandidateIdentifier:(id)a1 systemState:(id)a2 candidatesContainer:(id)a3 miloPrediction:(id)a4 inspections:(id)a5 statisticsManager:(id)a6 service:(id)a7;

@end
