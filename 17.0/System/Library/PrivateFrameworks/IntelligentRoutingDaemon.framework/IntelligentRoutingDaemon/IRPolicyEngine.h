@class NSString, NSDictionary, IRClassificatonGenerator, IRCandidateWrapperOrderOfExection;
@protocol IRServicePackageAdapter;

@interface IRPolicyEngine : NSObject

@property (retain, nonatomic) id<IRServicePackageAdapter> servicePackageAdapter;
@property (nonatomic) long long servicePackage;
@property (retain, nonatomic) NSString *lastEventsString;
@property (retain, nonatomic) IRClassificatonGenerator *classificatonGenerator;
@property (readonly, copy, nonatomic) NSDictionary *contexts;
@property (readonly, copy, nonatomic) NSDictionary *policyInspections;
@property (readonly, copy, nonatomic) IRCandidateWrapperOrderOfExection *orderOfExecution;

- (void).cxx_destruct;
- (id)initWithServicePackage:(long long)a0;
- (id)_lastEventsStringFromHistoryContainer:(id)a0 candidatesContainer:(id)a1 miloResults:(id)a2;
- (BOOL)didUpdateContextWithDate:(id)a0 candidatesContainer:(id)a1 historyEventsContainer:(id)a2 systemState:(id)a3 miloProviderLslPredictionResults:(id)a4 nearbyDeviceContainer:(id)a5 fillInspection:(BOOL)a6;
- (void)enableClassificationGenerator;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0;
- (BOOL)shouldLabelMiLoForEvent:(id)a0;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1;

@end
