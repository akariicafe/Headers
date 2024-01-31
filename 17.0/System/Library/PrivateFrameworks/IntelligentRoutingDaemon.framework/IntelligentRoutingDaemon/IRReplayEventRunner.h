@class IRContextInspection, IRCandidateWrapperOrderOfExection, NSDictionary, IRPolicyEngine;

@interface IRReplayEventRunner : NSObject {
    IRPolicyEngine *_policyEngine;
}

@property (readonly, copy, nonatomic) NSDictionary *contexts;
@property (readonly, copy, nonatomic) IRContextInspection *contextsInspection;
@property (readonly, copy, nonatomic) IRCandidateWrapperOrderOfExection *orderOfExecution;

+ (id)historyEventsContainerDO:(id)a0 RemovingEventsAfter:(id)a1;

- (void).cxx_destruct;
- (id)initWithServicePackage:(long long)a0;
- (void)runSingleReplayEvent:(id)a0 withHistoryEventsContainer:(id)a1;

@end
