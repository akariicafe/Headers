@class NSArray;

@interface AMSUIWebFetchTreatmentAreasAction : AMSUIWebAction

@property (retain, nonatomic) NSArray *namespaceIds;
@property (retain, nonatomic) NSArray *topicIds;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
