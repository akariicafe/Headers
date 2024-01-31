@class NSDictionary, NSOperationQueue, NSString, NSOperation;

@interface MPMediaKitContentReporter : NSObject {
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
    NSString *contentReportKindStringForType;
    NSString *contentReportTypeStringForType;
    NSOperation *contentReporterURLOperation;
}

@property (class, readonly, nonatomic) MPMediaKitContentReporter *sharedReporter;

- (id)init;
- (void).cxx_destruct;
- (id)contentReportTypeStringForType:(long long)a0;
- (id)contentReportKindStringForType:(long long)a0;
- (id)_dictionariesForType:(long long)a0;
- (void)_performWithBag:(id /* block */)a0;
- (id)_reportConcernBagDictionary;
- (id)contentReporterURLOperation:(id)a0 dictionary:(id)a1 withCompletion:(id /* block */)a2;
- (id)reportsForType:(long long)a0 contentID:(id)a1 commentText:(id)a2 concernParentItemID:(id)a3 concernParentItemType:(id)a4;
- (void)submitReport:(id)a0 completion:(id /* block */)a1;
- (id)urlLoadRequestWithRequest:(id)a0 requestContext:(id)a1;

@end
