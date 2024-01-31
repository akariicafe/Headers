@class NSMutableDictionary, IRCandidateSelector, NSDictionary, IRCandidateClassificationDetectorFiltered, IRCandidateClassificationDetectorSameSpace;

@interface IRClassificatonGenerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalContexts;
@property (retain, nonatomic) NSMutableDictionary *internalPolicyInspections;
@property (retain, nonatomic) IRCandidateClassificationDetectorFiltered *detectorFiltered;
@property (retain, nonatomic) IRCandidateClassificationDetectorSameSpace *detectorSameSpace;
@property (retain, nonatomic) IRCandidateSelector *selector;
@property (readonly, nonatomic) NSDictionary *contexts;
@property (readonly, nonatomic) NSDictionary *policyInspections;

- (id)init;
- (void).cxx_destruct;
- (void)_fillInspectionIfNeeded:(BOOL)a0 withCandidates:(id)a1 selectedCandidate:(id)a2 negativeInputs:(id)a3 stateMachineClassification:(long long)a4;
- (BOOL)generateClassificationsWithCandiatesContainer:(id)a0 systemState:(id)a1 historyEventsContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 fillInspection:(BOOL)a5 date:(id)a6;

@end
