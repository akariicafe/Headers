@class NSArray;

@interface AMSUIWebFetchTreatmentsAction : AMSUIWebAction

@property (retain, nonatomic) NSArray *areaIds;
@property (nonatomic) BOOL includeExperimentData;
@property (nonatomic) BOOL includePayload;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
