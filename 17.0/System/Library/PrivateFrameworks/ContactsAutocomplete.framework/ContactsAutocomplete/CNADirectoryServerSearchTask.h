@class CNContactStore, NSArray, CNResult, CNAutocompleteFetchRequest, CNCancelationToken;

@interface CNADirectoryServerSearchTask : CNTask {
    CNResult *_returnValue;
    NSArray *_containers;
    NSArray *_daResults;
    NSArray *_results;
}

@property (readonly, nonatomic) CNAutocompleteFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNCancelationToken *cancelationToken;

- (id)run;
- (void).cxx_destruct;
- (void)validateRequest;
- (void)convertResults;
- (void)createReturnValue;
- (void)fetchServerSearchContainers;
- (id)initWithRequest:(id)a0 contactStore:(id)a1 cancelationToken:(id)a2;
- (id)makeQueryForContainer:(id)a0 withLatch:(id)a1 andCollectConsumers:(id)a2;
- (void)searchServerContainers;

@end
