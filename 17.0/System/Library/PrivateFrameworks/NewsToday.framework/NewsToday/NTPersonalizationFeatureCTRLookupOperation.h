@class NSDictionary, NSArray, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *lookupRequests;
@property (copy, nonatomic) id /* block */ lookupCompletion;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
