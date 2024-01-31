@class FCCloudContext, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FCCheckArticleStatusOperation : FCOperation

@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) long long resultStatus;
@property (copy) id /* block */ checkStatusCompletion;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 articleID:(id)a1;

@end
