@class NSDictionary, NSArray, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTSectionPresencePersonalizationOperation : FCOperation

@property (copy, nonatomic) NSDictionary *absolutePresenceResult;
@property (copy, nonatomic) NSDictionary *relativePresenceResult;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *absoluteRequests;
@property (copy, nonatomic) NSArray *relativeRequests;
@property (copy, nonatomic) id /* block */ absolutePresenceHandler;
@property (copy, nonatomic) id /* block */ relativePresenceHandler;
@property (copy, nonatomic) id /* block */ personalizationCompletion;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
